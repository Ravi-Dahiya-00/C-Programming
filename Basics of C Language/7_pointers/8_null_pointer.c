// A null pointer is a pointer that doesn’t point to any valid memory location. It is used as a sentinel value to indicate that the pointer is not currently pointing to anything.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Type	                                                         Description
// Null Pointer                                                	Safely points to nothing (NULL)
// Uninitialized Pointer                                      	Holds garbage address, may cause crash

// To initialize a pointer before it’s assigned a valid address.

    int *ptr=NULL;
    if (ptr==NULL)
    {
        printf("This pointer is null");
    }
    else
    {
    printf("%d",*ptr);
    }

    int *ptr2=NULL;
    if (ptr==ptr2)
    {
        printf("\nboth pointers are null");
    }



    // To check for errors in memory allocation:
    int *ptr3 = (int *)malloc(sizeof(int));                         // this malloc will allocate memory dynamically of int means 4 bytes 
                                                                    // and malloc returns void pointer so we are type casting it into int by int*
    if (ptr3 == NULL) {
        printf("Memory allocation failed!\n");
    }
    
}