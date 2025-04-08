// Function With Argument but Without Return Type in C
// This type of function:
// Takes arguments (inputs)
// Does not return any value
// It performs a task using the provided input, but doesn't give anything back.

#include <stdio.h>

void add(int,int);   //function declaration

int main()
{
    int a,b;
    printf("value of a:\n");
    scanf("%d",&a);
    printf("value of b::\n");
    scanf("%d",&b);

    add(a,b);
    
}


// we will not get any error if we put x and y in function because these are local to the add function and a and b are local to the main function

// When you call a function in C and pass variables (a, b), it copies their values and sends them to the function.
// The function parameters (x, y) are local variables that receive those copied values.
// x and y don’t need to have the same names as a and b.

void add(int x,int y) 
{
    int sum=0;
    sum=x+y;
    printf("sum: %d",sum);
}