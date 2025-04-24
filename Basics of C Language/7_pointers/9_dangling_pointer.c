// A dangling pointer is a pointer that points to a memory location that has been freed (deallocated). Accessing such memory is undefined behavior and can cause serious bugs, crashes, or data corruption.

// Dangling pointers are a pointers that points to a memory location that has been freed or deleted, leading to undefined behaviour.Accessing it after deletion leads to undefined behavior and security risks.This often happens when freeing memory but still using the pointer. Set such pointers to NULL after free() to avoid this issue.


#include <stdio.h>
#include <stdlib.h>

int* arr(int *ptr2)
{
    // this static means it is initalized only once it cannot be initialized again and can be used anywhere in the code
        static int a=4;
        ptr2=&a;
        printf("value in local variable : %d",*ptr2);

        return &a;
        // it is giving address of a
    }

int main()
{
    int *ptr = (int *)malloc(sizeof(int));     

    *ptr=10;
    
    printf("value of ptr: %d\n",*ptr);

    free(ptr);           // Memory is freed
    // ptr is now dangling

    // printf("%d\n", *ptr); // ❌ Undefined behavior (Dangling)

    ptr = NULL;
    // Immediately set pointer to NULL after free()

  
    int *ptr2;
     
  int *w=arr(ptr2);
//   now w should have address of a but it was in local variable and it is not available in this function
printf("%d\n",*w);             //we will get warning function returns address of local variable
// but in this code we have made that variable static means variable is now global variable and can be used everywhere remove static to get error
//   these will not print anything because we have assigned a ptr2 in local variable and it is freed after that function 
    printf("%d",*ptr2);


}