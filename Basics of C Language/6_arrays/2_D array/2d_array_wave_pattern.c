#include <stdio.h>

int main() {
    int m, n;

    // Step 1: Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Step 2: Declare a 2D array with dimensions m x n
    int arr[m][n];

    // Step 3: Input matrix elements from user
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the value of element at (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }

    // --------------------------------------------
    // Step 4: Simple Wave Print - Row Wise
    // --------------------------------------------
    printf("\nSimple wave print row wise:\n");

    /* 
     * Even rows (i % 2 == 0): print left to right (0 to n-1)
     * Odd rows (i % 2 != 0): print right to left (n-1 to 0)
     */
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            // Print left to right
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);
            }
        } else {
            // Print right to left
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");  // Move to next line after each row
    }

    // --------------------------------------------
    // Step 5: Wave Pattern - Column Wise
    // --------------------------------------------
    printf("\nWave pattern column wise:\n");

    /*
     * Even columns (j % 2 == 0): print bottom to top (m-1 to 0)
     * Odd columns (j % 2 != 0): print top to bottom (0 to m-1)
     */
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            // Print bottom to top
            for (int i = m - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
            }
        } else {
            // Print top to bottom
            for (int i = 0; i < m; i++) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");  // Move to next line after each column
    }

    return 0;
}
