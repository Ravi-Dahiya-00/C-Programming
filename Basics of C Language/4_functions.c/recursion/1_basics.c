// Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem.
// A recursive function solves a small piece of a larger problem and then calls itself to solve the rest.

// Every recursive function has two parts:
// ✅ Base Case – the condition under which the function stops calling itself
// 🔁 Recursive Case – the part where the function calls itself with a smaller input.

#include <stdio.h>
void recursion1(int n)
{
    if (n<1)
    { 
        return ;
    }

    else 
    {
        printf("before coming back: %d \n",n);   
        recursion1(n-1);
        printf("after coming back: %d \n",n);
    }
}
int main()
{
    int n=2;
    recursion1(n);
}


// first n=2 , it doesnot follow if condition so it will go to else and print 2 then we are now in 1st loop of recursion now in 1st loop 
// we are calling the same function recursion1 it will again start the function from starting and now the value of n is 1 ,at this time we are in 2nd loop, so it also doesnot 
// follow if condition so it print the value 1 then again call the recursion1 function , now we are in 3rd loop now if condition is true because 
// n value is 0 so it will return , return to its caller and the caller is 3rd loop in else condition , so now it will go and its value is 1 
// and it will print 1 because in 3rd loop value of n was 1 , as follow it will return 2