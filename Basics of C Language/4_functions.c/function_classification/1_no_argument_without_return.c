
// 🔹 Function with No Argument and No Return Type in C
// This type of function:

// Takes no input (arguments)

// Returns nothing

// Just performs a task when called.




#include <stdio.h>

int sum()                    
{
    int a,b;
    printf("value of a:\n");
    scanf("%d",&a);
    printf("value of b::\n");
    scanf("%d",&b);

    printf("sum: %d",a+b);
}
// sum() doesn’t take any input.
// It doesn't return anything.
// It simply prints a message.



int main()
{
    sum();
}

