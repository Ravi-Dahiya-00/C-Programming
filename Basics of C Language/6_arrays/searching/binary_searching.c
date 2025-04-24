#include <stdio.h>
#include <stdlib.h> // for abs()
#include <math.h>   // also for abs(), optional

int main() {
    int n;
    
    // Step 1: Input array size
    scanf("%d", &n);
    
    int arr[n];

    // Step 2: Input array elements (assumed to be sorted)
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input target value
    int target;
    scanf("%d", &target);

    // Step 4: Initialize binary search boundaries
    int low = 0, high = n - 1, mid;

    // Step 5: Assume the closest element is the first one initially
    int min_diff = abs(arr[0] - target);
    int close = arr[0];

    // Step 6: Binary search to find closest element
    while (low <= high) {
        mid = (low + high) / 2;

        // If exact match found
        if (arr[mid] == target) {
            printf("%d\n", arr[mid]); // print exact match
            return 0; // exit the program
        }

        // Calculate difference between mid element and target
        int current_diff = abs(arr[mid] - target);

        // If this element is closer, update closest
        if (current_diff < min_diff) {
            min_diff = current_diff;
            close = arr[mid];
        }

        // Move search boundaries based on comparison
        if (arr[mid] > target)
        {
            high = mid - 1;
        } 
        else 
        {
            low = mid + 1;
        }
    }

    // Step 7: Print closest element
    printf("%d\n", close);

    return 0;
}
