#include <stdio.h>
// there are predefined functions in these libraries and we can also create our own functions


// function is a block of code that performs a specific task
// function is used to avoid the repetition of the code


// if we are making the function after the main function then we should declare the function before the main function
void square(int a);                         //function declaration
                        // in function declaration it is necessary to write the data type and no of arguments , it is not necessary to write the argument 
// if we will not declare this function here we will get warning or some error : implicit declaration of function and data type is always int 

//function defintion 
void sum()                                 //// the function is called by the function name and the function name is followed by the parenthesis
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("The sum of a and b is %d\n",a+b);


    // we can also call the function inside the function
    // but we cannot define the function inside the function

    // if we will call the sum function inside the sum function then it will go into the infinite loop
    // because the function will call itself again and again
    // this is called the recursion
    // the function that calls itself is called the recursive function
}



int main()
{
    sum();                     //function calling 
    printf("This is a function\n");
    sum();                     //function calling again
   // when we call the function then the memory is allocated to the function and the function is executed and then the memory is deallocated

   square(4);                 //function calling with arguments

    return 0;
}



         
// function defination

void square(int a)                                 //return type is from type of arguments 
{
    printf("The square of the number is %d\n",a*a);
}