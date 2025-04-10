#include <stdio.h>
int main()
{
    int a=20,b=30;
    int *p,*q;

    p=&a;
    q=&b;

    // we can not directly add two pointer that is illegal in c
    // printf("%d",p+q);


    // When you add/subtract a number to a pointer, it moves by the size of the data type, not just 1 byte!
    printf("%d",p+1);



    
}