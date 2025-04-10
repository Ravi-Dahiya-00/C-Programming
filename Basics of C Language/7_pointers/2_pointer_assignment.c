#include <stdio.h>
int main()
{
    
    int a=10,b=20;
    int *p,*q;

    p=&a;
    // here we are giving the address of a to p

    q=p;
    // here we have assigned the value of p to q and it was the address of a
    // so q is also equal to a

    printf("a: %d %d %d",a,*p,*q);


          // *q=*p;              this wrong initialization

     // p is correctly initialized with the address of a.
   // BUT q is just declared, not pointing to any valid memory.
    // So when you write *q = *p;, you're writing to an unknown memory location.


    // it might give correct output but if we will run here  gcc -Wall -Wextra testing.c
    // then it will catch error


    q=&b;

    printf("\nValue after address of b in q:%d",*q);

    *q=*p;
    // here *p means address of a , so here *q will also be assigned with the value at address of a 
    // but here the value of b will also be changed *q refers to address of b and q is now assigned with a
    // b=a

    printf("\nb: %d %d %d",b,*p,*q);
    // so now value of b is no more 20 it is 10



}