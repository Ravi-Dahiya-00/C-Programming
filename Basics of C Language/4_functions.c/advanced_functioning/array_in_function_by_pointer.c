#include <stdio.h>

// Modifying the array in the function will affect the original array (because you're working with the actual memory address).

// Function to print array elements
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Passing array to function
    printArray(numbers, size);

    return 0;
}
