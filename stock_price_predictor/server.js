const express = require('express');
const mongoose = require('mongoose');
const { OAuth2Client } = require('google-auth-library');
const bodyParser = require('body-parser');
const path = require('path');
const dotenv = require('dotenv');

// Load environment variables from a .env file
dotenv.config();

const app = express();
const client = new OAuth2Client(process.env.GOOGLE_CLIENT_ID); // Use your Google Client ID

// Middleware
app.use(bodyParser.json());
app.use(express.static(path.join(__dirname, 'public')));  // Serve static files like CSS, JS

// Connect to MongoDB
mongoose.connect(process.env.MONGO_URI, { useNewUrlParser: true, useUnifiedTopology: true })
  .then(() => console.log('Connected to MongoDB'))
  .catch(err => console.error('Error connecting to MongoDB', err));

// User Schema for MongoDB
const userSchema = new mongoose.Schema({
  googleId: { type: String, required: true },
  email: { type: String, required: true },
  name: { type: String, required: true },
  profilePic: { type: String, required: true },
});

const User = mongoose.model('User', userSchema);

// Serve login page when the root route is accessed
app.get('/', (req, res) => {
  res.send(`
    <!DOCTYPE html>
    <html lang="en">
      <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Login Page</title>
        <script src="https://apis.google.com/js/platform.js" async defer></script>
        <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
        <style>
          body {
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            background-color: #f1f1f1;
            margin: 0;
          }
          .login-container {
            background-color: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
            text-align: center;
          }
          h2 {
            margin-bottom: 20px;
            color: #333;
          }
          .g-signin2 {
            width: 100%;
            margin-top: 20px;
          }
        </style>
      </head>
      <body>
        <div class="login-container">
          <h2>Login to Your Account</h2>
          <div class="g-signin2" data-onsuccess="onSignIn"></div>
        </div>
        <script>
          function onSignIn(googleUser) {
            var profile = googleUser.getBasicProfile();
            var id_token = googleUser.getAuthResponse().id_token;

            $.ajax({
              url: '/login',
              method: 'POST',
              data: {
                token: id_token
              },
              success: function(response) {
                if (response.success) {
                  alert('Login successful!');
                  window.location.href = '/dashboard';
                } else {
                  alert('Login failed');
                }
              },
              error: function() {
                alert('Error while logging in');
              }
            });
          }
        </script>
      </body>
    </html>
  `);
});

// API route to handle login
app.post('/login', async (req, res) => {
  const token = req.body.token;

  try {
    // Verify the Google ID Token
    const ticket = await client.verifyIdToken({
      idToken: token,
      audience: process.env.GOOGLE_CLIENT_ID,
    });

    const payload = ticket.getPayload();
    const googleId = payload['sub'];
    const email = payload['email'];
    const name = payload['name'];
    const profilePic = payload['picture'];

    // Check if the user exists in the database
    let user = await User.findOne({ googleId });
    
    if (!user) {
      // If the user doesn't exist, create a new user
      user = new User({
        googleId,
        email,
        name,
        profilePic,
      });
      await user.save();
    }

    // Return success response
    res.json({ success: true });
  } catch (error) {
    console.error(error);
    res.status(400).json({ success: false });
  }
});

// Dashboard route (just a placeholder)
app.get('/dashboard', (req, res) => {
  res.send('<h1>Welcome to the Dashboard</h1>');
});

// Start the server
const PORT = process.env.PORT || 5000;
app.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});
