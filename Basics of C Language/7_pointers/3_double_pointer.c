#include <stdio.h>
int main()
{
    // A double pointer is a pointer to another pointer.
    // a pointer will store address of another pointer variable 

    int a=10;

    int *p=&a;
    // p is a pointer to an integer.
    // It stores the address of variable a.


    int **q=&p;
    // here 1 * refers that we are here going to store the address of a pointer variable and *q tells it is a pointer, thats why ** are used in pointers
    // q is a pointer to a pointer to an integer.

// It stores the address of pointer p.

// So now:
// 👉 q points to p
// 👉 p points to a
// 👉 q → p → a

   
//       Expression	                                        Meaning                 	                                 Value
//           a	                                        Value stored in variable a	                                     10
//          *p	                            Value at the address stored in p (which is a)	                             10
//          **q                     	Value at the address stored in the pointer *q (which is *p)	                     10

    printf("a: %d %d %d",a,*p,**q);








    // ***r through a triple pointer,here it means it holds the address value of a double pointer


    int ***r=&q;
    printf("\na: %d %d %d %d",a,*p,**q,***r);


    // r → q → p → a

    // *(*(*(r)))=&q;
    // first it will give value at address q 
    // *(*(q))=&q;
    // now this will give value at address p
    // *(p)=&q;
    // now this will give value at address a 

   
    // *q=25;
    // this will give error because the value *q means at p is of data type int * so it will be illegal




    // if we are making a pointer of n then it should contain the address value of (n-1) pointer
}       