// In C, dynamic memory allocation allows you to allocate memory at runtime (i.e., while the program is running),
//  rather than at compile time. This is useful when you don't know in advance how much memory you'll need.


// To allocate memory when the size is unknown at compile time.
// To use memory efficiently.
// To create flexible data structures like linked lists, trees, etc.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The entered numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    printf("\nThis will given garbage value after freeing the memory: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


     
    // Always check if memory allocation was successful (if (ptr == NULL)).
    // Don't forget to free() the allocated memory when you're done using it — this prevents memory leaks.
    // malloc() returns a void pointer, which needs to be typecast to the appropriate type.
    
}