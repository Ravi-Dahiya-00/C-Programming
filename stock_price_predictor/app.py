import yfinance as yf
import pandas as pd
import numpy as np
from flask import Flask, render_template, request

app = Flask(__name__)

# Download stock data
def get_stock_data(ticker):
    stock = yf.Ticker(ticker)
    stock_data = stock.history(period="1y")
    return stock_data

# Adding Indicators (RSI, MACD, EMA)
def add_technical_indicators(stock_data):
    # RSI (Relative Strength Index)
    delta = stock_data['Close'].diff()
    gain = (delta.where(delta > 0, 0)).rolling(window=14).mean()
    loss = (-delta.where(delta < 0, 0)).rolling(window=14).mean()
    rs = gain / loss
    stock_data['RSI'] = 100 - (100 / (1 + rs))

    # MACD (Moving Average Convergence Divergence)
    short_ema = stock_data['Close'].ewm(span=12, adjust=False).mean()
    long_ema = stock_data['Close'].ewm(span=26, adjust=False).mean()
    stock_data['MACD'] = short_ema - long_ema
    stock_data['MACD_signal'] = stock_data['MACD'].ewm(span=9, adjust=False).mean()

    # Exponential Moving Average (EMA)
    stock_data['EMA_12'] = stock_data['Close'].ewm(span=12, adjust=False).mean()
    stock_data['EMA_26'] = stock_data['Close'].ewm(span=26, adjust=False).mean()
    
    return stock_data

# Trend and prediction logic
def analyze_trend(stock_data):
    trend = "No Signal"
    recommendation = "No Recommendation"
    entry_point = stock_data['Close'].iloc[-1]
    target_point = entry_point
    current_price = entry_point
    
    # Checking RSI for Buy/Sell
    if stock_data['RSI'].iloc[-1] < 30:
        recommendation = "Buy Signal (Oversold)"
    elif stock_data['RSI'].iloc[-1] > 70:
        recommendation = "Sell Signal (Overbought)"
    
    # MACD crossover for Buy/Sell
    if stock_data['MACD'].iloc[-1] > stock_data['MACD_signal'].iloc[-1]:
        trend = "Uptrend"
        if recommendation != "Sell Signal (Overbought)":
            recommendation = "Buy Signal (MACD Bullish)"
        target_point = entry_point * 1.05  # 5% increase as target
    elif stock_data['MACD'].iloc[-1] < stock_data['MACD_signal'].iloc[-1]:
        trend = "Downtrend"
        if recommendation != "Buy Signal (Oversold)":
            recommendation = "Sell Signal (MACD Bearish)"
        target_point = entry_point * 0.95  # 5% decrease as target
    
    # Additional logic for target and entry points
    if trend == "Uptrend":
        target_point = entry_point * 1.05  # Adjust to higher target for uptrend
    elif trend == "Downtrend":
        target_point = entry_point * 0.95  # Adjust to lower target for downtrend

    return trend, recommendation, entry_point, target_point

# Profit/Loss Calculation
def calculate_profit_loss(entry, target):
    return (target - entry) / entry * 100  # Percentage profit/loss

@app.route('/', methods=['GET', 'POST'])
def home():
    stock_name = None
    current_price = None
    trend = None
    recommendation = None
    entry_point = None
    target_point = None
    profit_loss = None
    ticker = None
    
    if request.method == 'POST':
        ticker = request.form['ticker']
        stock_data = get_stock_data(ticker)
        stock_data = add_technical_indicators(stock_data)
        trend, recommendation, entry_point, target_point = analyze_trend(stock_data)
        profit_loss = calculate_profit_loss(entry_point, target_point)
        
        stock_name = ticker
        current_price = stock_data['Close'].iloc[-1]

    return render_template('index.html', 
                           stock_name=stock_name, 
                           current_price=current_price,
                           trend=trend, 
                           recommendation=recommendation,
                           entry_point=entry_point, 
                           target_point=target_point, 
                           profit_loss=profit_loss, 
                           ticker=ticker)

if __name__ == "__main__":
    app.run(debug=True)
