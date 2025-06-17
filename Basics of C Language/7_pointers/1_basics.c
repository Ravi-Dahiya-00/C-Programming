//  Why use pointers?
// To access and modify variables indirectly
// For dynamic memory allocation
// To pass arguments by reference to functions
// For efficient array and string handling


// Note: We never say pointer stores or holds a memory location. Instead, we say pointer points to a memory location.
//  So from now always use the language pointer points to a memory location.


#include <stdio.h>
int main()
{
    int a=10;
    // this type of variables contains three things name,value,address

  
    // In C, a pointer is a variable that stores the memory address of another variable.
    // it is also known as derived data type



    int *p;
    // here we have declared a pointer p, int is not the data type of pointer p , int is the data type of variable whose address the pointer p is containing

    float *float_p;
    // now the data type of the variable whose address is stored in float_p is float.

    p = &a;      // Storing the address of a in p

//     We use unary & (reference of) operator to get memory address of a variable. Reference operator is also known as address of operator.



    // float_p=&a; 
        // this is wrong method of initialization because data type of variable's address float_p stores is float and we are putting the address of a variable that stores the integer value.

    

        printf("Value of a: %d\n", a);        // 5

        printf("Value at p: %d\n", *p);       // 5

//     Dereferencing is the process of retrieving value at memory location pointed by a pointer.
//  We use unary * dereference operator to get value pointed by a memory address. Dereference operator is also known as indirection operator.



        printf("Address of p: %p\n", &a);     // e.g., 0x7ffee1b8d78c

        printf("Pointer p holds: %p\n", p);   // same as &p
        



        int c;
        c=*p;

        // here this * means value at address p , so value of address p will be stored in c and p is storing address of a so c=a 

        printf("value of c: %d\n",c);


        *p=20;                                         //value is changed at address at which p is refering so value of a will be changed

        printf("Value of a after changing: %d\n",a);
        printf("Value of p after changing: %p\n",p);                   //memory address will remain same






        
        int b=5;
        int *q;
        q=&b;
        int x;

        x = *p, *q;  // Equivalent to: x = a, b;

                // here we are giving two values so here only value of {a} will be given to x because assignment operator has more precedence than comma operator


        printf("Value of x: %d\n", x);  // Output: 10
    
     




}