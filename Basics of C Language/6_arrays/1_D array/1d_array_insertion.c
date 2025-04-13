#include <stdio.h>
#define MAX_SIZE 100  // Define a constant for clarity

int main() {
    int n, pos, arr[MAX_SIZE], i, num;

    printf("Enter the size of an array (Max %d): ", MAX_SIZE);
    scanf("%d", &n);


    // Check if array size is valid
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid size! Size must be between 1 and %d.\n", MAX_SIZE);
        return 1;  // Exit with error
    }

    // taking input for elements array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    // taking the position as input where we want to add elements
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);





    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Position must be between 1 and %d.\n", n + 1);
        return 1;  // Exit with error
    }


    // asking user to insert element to enter at position taken as input by user
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);


    
    // Shift elements to the right (start from the end)
    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos - 1] = num;
    n++;  // Update size after insertion

    printf("Array after inserting new element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Add space for readability
    }

    return 0;
}