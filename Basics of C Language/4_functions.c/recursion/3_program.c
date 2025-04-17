#include <stdio.h>  // Preprocessor directive to include standard input-output library

// Function to calculate factorial of a number recursively
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call: n * factorial of (n-1)
}

int main() {
    int result = factorial(5);  // Call the factorial function with input 5
    printf("Factorial of 5 is: %d\n", result);  // Output the result
    return 0;  // Return 0 to indicate successful execution
}
