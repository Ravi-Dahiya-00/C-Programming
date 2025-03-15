#include <stdio.h>
int main() {
    int arr[100], n, i, pos;
    printf("Enter the size of an array( Max 100) \n");
    scanf("%d", &n);
    printf("Enter an array elements \n");
    
    //Take input values    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to delete an element\n");
    scanf("%d", &pos);
    
    //Check valid delete position    
    if(pos < 0 || pos > n ) {
        printf("Invalid position");    
    } else {
        
        //Traverse an array

        for(i = pos-1; i < n; i++) {

            arr[i] = arr[i+1];
        }
        //Decrement the size of an array
        n--;

        printf("Array after deleting an element\n");
        for(i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}