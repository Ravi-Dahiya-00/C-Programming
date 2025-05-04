#include <stdio.h>

// Global variable (scope: whole file)
int globalVar = 10;

// Function to demonstrate function parameter scope
void showValue(int paramVar) {
    printf("Inside showValue function, paramVar = %d\n", paramVar);

    // Local variable inside showValue
    int localInsideShow = 50;
    printf("Inside showValue function, localInsideShow = %d\n", localInsideShow);
}

int main() {
    // Local variable in main
    int localVar = 20;

    printf("In main function, globalVar = %d\n", globalVar);  // Accessing global
    printf("In main function, localVar = %d\n", localVar);    // Accessing local

    showValue(100); // Calling function with argument

    // Trying to access localInsideShow here would cause an ERROR!
    // printf("%d", localInsideShow);  // ❌ Not allowed

    return 0;
}
