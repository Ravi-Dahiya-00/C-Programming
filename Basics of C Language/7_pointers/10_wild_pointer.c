#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Wild pointers are uninitialized pointers that point to random memory. Using them can crash the program or lead to unpredictable behavior. 
    // They are dangerous because they don't point to a valid memory address.Always assign them NULL if you don't have an initial target.

    int *ptr;       //uninitialized pointer
    printf("%d",*ptr);     //here compiler will make it null pointer
    
    // we can make a pointer null to avoid errors or we can give some address of any variable containing some value 
    // we can also allocate some memory to that pointer using dynamic memory allocation

    int *ptr2=(int *)malloc(sizeof(int));
    // allocating memory using malloc function , by dynamic memory allocation
    // int* is doing type casting because malloc is going to return void pointer
    printf("\n%d",*ptr2);
}