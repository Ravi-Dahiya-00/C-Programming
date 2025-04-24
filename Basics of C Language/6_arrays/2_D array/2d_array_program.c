#include <stdio.h>  // Include standard input/output library

int main() {
    int m, n, sum = 0;  // Variables for rows, columns, and sum of all elements

    // Ask user for the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &m);

    // Ask user for the number of columns
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Declare a 2D array with m rows and n columns
    int arr[m][n];

    // Input elements into the 2D array
    for (int i = 0; i < m; i++) {            // Loop through rows
        for (int j = 0; j < n; j++) {        // Loop through columns
            printf("Enter the value of element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);         // Read element into array
        }
    }

    // Display the matrix and calculate the sum of its elements
    printf("\nMatrix entered:\n");
    for (int i = 0; i < m; i++) {            // Loop through rows
        for (int j = 0; j < n; j++) {        // Loop through columns
            printf("%d ", arr[i][j]);        // Print the element
            sum += arr[i][j];                // Add element to sum
        }
        printf("\n");                        // Move to next line after each row
    }

    // Display the sum of all elements
    printf("\nSum of all the elements of the matrix is: %d\n", sum);

    return 0;  // Exit the program
}
