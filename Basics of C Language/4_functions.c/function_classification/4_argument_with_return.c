// function With Argument and With Return Type in C
// This type of function:
// Takes input (arguments)
// Returns a result

#include <stdio.h>


int multiply(int x, int y) {  // With argument and return type
    return x * y;
}

int main() {
    int a,b;
    printf("value of a:\n");
    scanf("%d",&a);
    printf("value of b::\n");
    scanf("%d",&b);
    
    int product = multiply(a, b);      // Calling the function and storing result
    printf("Product is: %d\n", product);
    return 0;
}