#include <stdio.h>

int main() {
    int m, n, sum = 0, col_sum = 0;

    // Step 1: Input the number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Step 2: Declare a 2D array with m rows and n columns
    int arr[m][n];

    // Step 3: Take input for each element of the matrix
    for (int i = 0; i < m; i++) {                // Loop through each row
        for (int j = 0; j < n; j++) {            // Loop through each column
            printf("Enter the value of element at (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);             // Input element
        }
    }

    // Step 4: Calculate and print the sum of elements row-wise
    for (int i = 0; i < m; i++) {
        sum = 0;                                 // Reset sum for each row
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];                    // Add each element in the row
        }
        printf("\nSum of elements in row %d: %d", i + 1, sum);
    }

    // Step 5: Calculate and print the sum of elements column-wise
    for (int i = 0; i < n; i++) {
        col_sum = 0;                             // Reset sum for each column
        for (int j = 0; j < m; j++) {
            col_sum += arr[j][i];                // Add each element in the column
        }
        printf("\nSum of elements in column %d: %d", i + 1, col_sum);
    }

    return 0; // End of program
}
