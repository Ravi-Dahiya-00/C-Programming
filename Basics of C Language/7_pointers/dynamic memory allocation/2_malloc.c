// malloc() stands for "Memory Allocation". It's a function in C used to allocate a specific amount of memory at runtime from the heap (a memory pool used for dynamic memory).



#include <stdio.h>
#include <stdlib.h>


// In C, memory can be:

// Static (fixed-size arrays, global variables)
// Stack (local variables, function calls)
// Heap (dynamically allocated using malloc, free, etc.)

// for dynamic memory allocation we use pointers

// void* malloc(size_t size);

// size: number of bytes you want to allocate
// Returns: a void pointer to the first byte of the allocated memory block.
// You usually cast the void* to the type you need.

int main()
{
    int *ptr;
    ptr = (int*) malloc(sizeof(int));  // Allocating memory for 1 integer

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
    } else {
        *ptr = 50;
        printf("Value: %d\n", *ptr);
    }

    free(ptr); // Always free the memory


    int n,i;
    printf("enter no of values: \n");
    scanf("%d",&n);
    ptr =(int*) malloc(n*sizeof(int));

    printf("Enter values: \n");
    for (int i=1;i<=n;i++)
    {
        scanf("%d",ptr+i);
        // here we donot need to write down the address because pointer itself stores the address
        // ptr is pointing to the first element of a dynamically allocated array of n integers.
        // It works like an array.
    }

    for (int i=1;i<=n;i++)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);
}
