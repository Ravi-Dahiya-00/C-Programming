#include <stdio.h>
int main()
{
    
    int a=10,b=20;
    int *p,*q;

    p=&a;
    *q=&p;
    // here we are giving the address of a to p
  
    *q=25;
    printf("%d",a);


}