// extern is used to declare a global variable in another file or outside the function.
// It tells the compiler:
// "The variable exists somewhere else, don’t allocate memory here."
// It is used for sharing variables across multiple files.

// ✅ No memory is created where extern is declared — only linked to actual memory elsewhere.

#include <stdio.h>

int x = 10; // Global variable

void show() {
    extern int x;  // Tells compiler: x is declared somewhere (above)
    printf("Value of x = %d\n", x);
}

int main() {
    show();
    return 0;
}
