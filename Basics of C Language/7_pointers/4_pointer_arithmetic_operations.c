// we cannot add two pointers but we can add a integer value to the pointer
#include <stdio.h>
int main()
{
    int a=20,b=30;
    int *p,*q,*ptr;

    p=&a;
    q=&b;
    ptr=&b;

    // we can not directly add two pointer that is illegal in c
    // printf("%d",p+q);


    // When you add/subtract a number to a pointer, it moves by the size of the data type, not just 1 byte!
    p+=1;
    printf("\n%d\n",*p);
    // it will give any garbage value because we didnot assigned any value at the address of a+2bytes




    ptr + 2;
   // means move the pointer two elements forward, not just two bytes.
// The actual amount it moves depends on the data type the pointer is pointing to.


// this is useful when we play with arrays and not useful for general purpose arithmetic operations

// here arr is a constant pinter it will always contain base address of the array

int arr[] = {10, 20, 30, 40, 50};
int *ptr1 = arr;

printf("%d\n", *(ptr1));     // prints 10
printf("%d\n", *(ptr1+ 1)); // prints 20
printf("%d\n", *(ptr1 + 2)); // prints 30



// You must make sure you're not going out of the array bounds when doing ptr + n.

// 📏 Behind the Scenes
// If ptr is an int*, and int is 4 bytes on your system:

// ptr → memory address: 1000
// ptr + 1 → address: 1004
// ptr + 2 → address: 1008



// Pointer arithmetic takes the size of the data type into account.


    

char arr2[] = {'A', 'B', 'C', 'D'};
char *ptr2 = arr2;

printf("%c\n", *(ptr2));     // A
printf("%c\n", *(ptr2+ 1)); // B
printf("%c\n", *(ptr2 + 2)); // C

}