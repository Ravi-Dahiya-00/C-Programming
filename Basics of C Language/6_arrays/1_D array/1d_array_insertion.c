#include <stdio.h>
int main() {
    int n, pos, arr[100], i, num;
    printf(" Enter the size of an array (Max 100) \n");
    scanf( "%d", &n);
    printf( " Enter the element of an array \n");
    
    //Input value of an array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Position to insert a new element
    printf(" Enter the position \n");
    scanf("%d", &pos);
    
    // Number to be inserted in an array
    printf(" Enter number to be inserted \n");
    scanf("%d", &num);


    for( i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos-1] = num;
   
    //Increment the size of an array
    // n++;
    printf(" Array after inserting new element \n");
    
    //Array after inserting new element
    for( i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
