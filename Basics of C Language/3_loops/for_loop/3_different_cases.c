#include <stdio.h>
int main()
{
    
   printf("hello");
    int i=1;
    for(;i<=10;i++);
    {
        printf("%d\n",i);
        i++;
    }
    printf("hello");

// output --> hello 11 hello 



printf("\ni=%d\n",i);




printf("hello");
    int i1=1;
    for(;i1<=10;);
    {
        printf("%d\n",i1);
        i1++;
    }
    printf("hello");


// output --> hello           infinite loop









    printf("hello");
    int i2=1;
    while(i2<=10);
    {
        printf("%d\n",i2);
        i2++;
    }
    printf("hello");

// output --> hello           infinite loop
}