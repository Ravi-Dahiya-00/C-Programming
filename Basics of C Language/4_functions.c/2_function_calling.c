#include <stdio.h>


void changeValue(int x) {
    x = 100;
}



// int *r → r is a pointer that stores the address of the given parameter.
// *r = 3 → changes the value at that address → modifies the original variable.



void swapping(int *r,int *t)
{
    int new_var=*r;
    *r=*t;
    *t=new_var;
    printf("%d %d\n\n",*r,*t);
}

int main()
{

    // call by value
    // When you pass a variable to a function, a copy of that variable is made and given to the function.
    // So, changes made inside the function do NOT affect the original variable.


    int a = 10;
    changeValue(a);
    printf("After changeValue (call by value): a = %d\n", a);  // Output: 10

    







// &r → passes the address of r to the function.

    // In Call by Reference, we pass the address of a variable to a function using pointers.
// This allows the function to modify the original variable directly.

int r=3,t=5;
 swapping(&r,&t);     // Pass addresses
 printf("After swapping (call by reference): x = %d, y = %d\n", r, t);  // Output: 5 3




}