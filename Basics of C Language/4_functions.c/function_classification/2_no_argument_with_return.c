// Function Without Argument but With Return Type in C
// This type of function:

// Takes no input (no arguments)

// Returns a value (like int, float, etc.)

// Useful when you want to get a result without passing any values to the function.

#include <stdio.h>

int multiply()            // No arguments, returns int
{
    int a,b;
    printf("value of a:\n");
    scanf("%d",&a);
    printf("value of b::\n");
    scanf("%d",&b);

    return a,a*b;

    // here we are returning two values but the comma operand means discard the value of first and take the value of next , so here it will return only sum not the value of a 
    
    printf("This statement will not work because the function has returned something and pointer is out of the multiply() function.");


}

int main()
{
    int m=multiply(2,3,4,4);             // Function call
    // here i have given some parameters in function calling but it does not take any parameters but it will not give any error , so better to put void in the function while not putting any arguments  multiply(void)
    printf("multiplication: %d",m);
}