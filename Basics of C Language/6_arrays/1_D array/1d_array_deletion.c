#include <stdio.h>
int main() {
    int arr[100], array_size, i, pos;

    
    printf("Enter the size of an array( Max 100) \n");
    scanf("%d", &array_size);


    printf("Enter an array elements \n");
    
    //Take input values    
    for(i = 0; i < array_size; i++) {
        scanf("%d", &arr[i]);
    }
    

    // printing original array
    printf("Original array :\n");
    for (int i=0;i<array_size;i++)
    {
        printf("%d ",arr[i]);
    }

    // printing size of original array
    printf("\nsize of original array : %d\n",array_size);

    

    // position on which we want to delete element
    printf("Enter position to delete an element\n");
    scanf("%d", &pos);
    


    //Check valid delete position    
    if(pos <= 0 || pos > array_size ) {
        printf("Invalid position");    
    }
   
    
    else {
        
        //Traverse an array

        for(i = pos-1; i < array_size; i++) {

            arr[i] = arr[i+1];
        }
        //Decrement the size of an array
        array_size--;



        printf("size of array after removing 1 element : %d\n",array_size);

        printf("Array after deleting an element\n");
        for(i = 0; i < array_size; i++) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}