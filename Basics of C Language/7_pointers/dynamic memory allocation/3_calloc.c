// calloc() stands for "contiguous allocation" and is used to dynamically allocate memory like malloc(), but with a special twist:
// It initializes all allocated memory to zero.
// Allocates memory for multiple blocks of a given same size.


// void* calloc(size_t num_elements, size_t element_size);

// it will store n no of blocks of same size 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=0,n;
    printf("enter no of values:\n");
    scanf("%d",&n);

    ptr=(int *) calloc(n,sizeof(int));

    
    printf("Enter values:\n");
    for (int i=1;i<=n;i++)
    {
        scanf("%d",ptr+i);
    }

    for (int i=1;i<=n;i++)
    {
        printf("%d",*(ptr+i));
    }

    free(ptr);

    printf("%d",*ptr);
}