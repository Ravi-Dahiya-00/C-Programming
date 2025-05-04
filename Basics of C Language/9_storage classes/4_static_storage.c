// When you declare a variable as static, it retains its value between function calls. 📈
// Lifetime: Created only once and exists till the end of the program.
// Scope: If declared inside a function, it is local to that function but remembers its old value.
// If declared outside all functions, it makes a global variable private to that file.


// ✅ Static variables are not reinitialized each time the function is called.

#include <stdio.h>

static int x=10;

void counter() {
    static int count = 0; // Initialized only once
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter(); // 1st call
    counter(); // 2nd call
    counter(); // 3rd call

    printf("%d",x);
    return 0;
}

// static = remember old values + lifetime till program ends.



// Feature                           |                           Description

// Storage Area                      |                          Data Segment (not stack!)
// Lifetime                          |                          Entire program execution
// Scope                             |                          Local if declared inside function, or File level if global
// Initialization                    |                           Only once
// Default value                     |                           0 (zero) if not explicitly initialized