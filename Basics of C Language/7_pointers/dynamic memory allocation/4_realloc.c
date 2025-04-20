// realloc() stands for re-allocation. It allows you to:
// Change the size of memory that was previously allocated using malloc() or calloc().
// Increase or decrease the size of the allocated memory block dynamically during runtime.

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

    // if we will decrease its size we will also lost some elements

    printf("Enter new element: ");
    scanf("%d", &arr[n]);  // Add to the new last position

    printf("Updated array:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    // Free the m-emory
    free(arr);
}