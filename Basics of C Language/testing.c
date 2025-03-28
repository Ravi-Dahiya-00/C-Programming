#include <stdio.h>

int main() {
    int arr[] = {45, 76, 120, 34, 90, 57, 200, 65, 88, 15, 
                 98, 23, 111, 67, 89, 77, 300, 51, 82, 95};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0, count = 0, average;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {   // Only two-digit numbers
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        average = sum / count;
        printf("Average of two-digit numbers: %d\n", average);
    } else {
        printf("No two-digit numbers found.\n");
    }

    return 0;
}
