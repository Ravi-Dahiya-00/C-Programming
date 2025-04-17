#include <stdio.h>

// Function declarations
void functionA(int n);
void functionB(int n);

// Function A calls function B
void functionA(int n) {
    if (n > 0) {
        printf("A: %d\n", n);
        functionB(n - 1);  // Calls functionB
    }
}

// Function B calls function A
void functionB(int n) {
    if (n > 0) {
        printf("B: %d\n", n);
        functionA(n / 2);  // Calls functionA
    }
}



int main()
{
    // direct recursion: 
                // Direct recursion is when a function calls itself directly within its own body.

    // above example code
    // The function factorial is directly calling itself — this is direct recursion.
    // No other helper function is involved.
    // It's a typical example where the recursion stops when n == 0 or n == 1.





    // indirect recursion:
                        // Indirect recursion occurs when function A calls function B, and function B again calls function A — forming a cycle.



    
    functionA(10);  // Starts the indirect recursion chain
    return 0;
                    
    
    

}