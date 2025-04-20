//  free(), which is used in C to deallocate memory that was previously allocated dynamically using malloc(), calloc(), or realloc().
// This memory stays allocated until you explicitly release it — otherwise, it causes a memory leak.

// Always free() memory once — not multiple times.
// After freeing, it's a good practice to set the pointer to NULL:
#include <stdio.h>
int main()
{
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Initial allocation
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Increase array size by 1
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    printf("Enter new element: ");
    scanf("%d", &arr[n]);  // Add to the new last position

    printf("Updated array:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory
    free(arr);

    // You can reuse arr after freeing it — it's just a variable name (pointer).
// Just make sure to reallocate memory before using it again.
// Setting arr = NULL; after free(arr); avoids mistakes like accessing freed memory (dangling pointer).



    // Reuse the name 'arr' for new allocation
    arr = (int *)malloc(2 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    arr[0] = 100; arr[1] = 200;

    printf("After reuse: %d %d\n", arr[0], arr[1]);

    free(arr); // Free again


}