// A dangling pointer is a pointer that points to a memory location that has been freed (deallocated). Accessing such memory is undefined behavior and can cause serious bugs, crashes, or data corruption.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));     

    *ptr=10;
    
    printf("value of ptr: %d\n",*ptr);

    free(ptr);           // Memory is freed
    // ptr is now dangling

    printf("%d\n", *ptr); // ❌ Undefined behavior (Dangling)

    ptr = NULL;
    // Immediately set pointer to NULL after free()

  
    


}