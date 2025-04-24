#include <stdio.h>

int main() {
    int n, m;
    // Read the size of both arrays
    scanf("%d", &n);  // size of array a
    scanf("%d", &m);  // size of array b
    
    int a[n], b[m];
    
    // Read elements of array a
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Read elements of array b
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Resultant array to store common elements (max size = n * m)
    int arr[n * m];
    int k = 0;  // current size of the resultant array
    
    // Nested loops to compare each element of a with each element of b
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // If a[i] is equal to b[j], check for uniqueness before adding
            if (a[i] == b[j]) {
                int alreadyPresent = 0;
                
                // Check if this element is already in arr[] (to avoid duplicates)
                for (int l = 0; l < k; l++) {
                    if (arr[l] == a[i]) {
                        alreadyPresent = 1;  // mark as already present
                        break;
                    }
                }
                
                // If not already present, add the element to arr[]
                if (alreadyPresent==0) {
                    arr[k++] = a[i];  // add element and increment k
                }
            }
        }
    }

    // Print the common elements found in both arrays
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
