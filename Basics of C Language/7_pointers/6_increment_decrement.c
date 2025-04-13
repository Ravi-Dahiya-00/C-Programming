#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int *ptr = arr;

    printf("Before increment: %d\n", *ptr);  // 1
    ptr++;  // move to next int (usually +4 bytes)
    printf("After increment: %d\n", *ptr);   // 2

    printf("post increment: %d\n",*(ptr++));     // 2 because first it will return the value 
    // it will return the value first then increment will be done no problem bracket is there but it will return the value first

    // now ptr is at 3
    
    printf("pre increment: %d\n",*++ptr);  
    // here there two operators ++ and * they have same precedence but associativity is from right to left

    printf("Before decrement: %d\n",*ptr);  // 4
    ptr--;  // now points to arr[1]
    printf("After decrement: %d\n", *ptr);   // 3


    ptr--;
    ptr--;
    // now ptr is at 1

    printf("2 operators with comma: %d %d %d\n",*ptr++,*ptr++,*ptr++);
    // this compiler will evaluate it from right to left 
    // this depends on compiler 

}