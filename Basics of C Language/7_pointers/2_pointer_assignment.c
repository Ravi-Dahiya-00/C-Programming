#include <stdio.h>
int main()
{
    
    int a=10,b=20;
    int *p,*q;

    p=&a;
    // here we are giving the address of a to p

    q=p;
    // here we have assigned the value of p to q and it was the address of a
    // so q is also equal to a , it will take memory address because q is also a pointer

    printf("a: %d %d %d",a,*p,*q);


          // *q=*p;              this wrong initialization if q has not been inititalized 

     // p is correctly initialized with the address of a.
   // BUT q is just declared, not pointing to any valid memory.
    // So when you write *q = *p;, you're writing to an unknown memory location.


    // it might give correct output but if we will run here  gcc -Wall -Wextra testing.c
    // then it will catch error



    
    q=&b;      // 10-->20

    printf("\nValue after address of b in q:%d",*q);

    *q=*p;


    // here *p means address of a , so here *q will also be assigned with the value at address of a 
    // but here the value of b will also be changed *q refers to address of b and q is now assigned with a
    // b=a

    printf("\nb: %d %d %d",b,*p,*q);
    // so now value of b is no more 20 it is 10


    int *pt=p;
        // There are two ways to initialize a pointer variable.
    //  You can use reference operator & to get memory location of a variable or you can also directly assign one pointer variable to other pointer variable.





}