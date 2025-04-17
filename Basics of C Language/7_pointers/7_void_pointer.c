// A void pointer (also called a generic pointer) is a special type of pointer that can hold the address of any data type, but cannot be dereferenced directly without a type cast.


// They are Declared as void*, these are generic pointers that can point to any data type. They’re useful when the data type isn’t known in advance, like in library functions.Before dereferencing, they must be typecast to a specific data type.They provide flexibility but require careful handling.



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ip;              //integer pointer
    char *cp;             //character pointer

    int a = 10;
    float b = 5.5;
    char c = 'Z';

    void *ptr;

    // Point to int
    ptr = &a;
    printf("Value of a: %d\n", *(int *)ptr);  // typecast needed

    // Point to float
    ptr = &b;
    printf("Value of b: %.1f\n", *(float *)ptr);

    // Point to char
    ptr = &c;
    printf("Value of c: %c\n", *(char *)ptr);

    // for void pointer we have to first specify its data type 
    // first we have to type cast that void pointer into a data type before printing



    // Pointer arithmetic is not allowed on void pointers (because the compiler doesn't know the size of the type).




    return 0;


}