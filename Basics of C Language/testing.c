
#include <stdio.h>
int main()
{

   printf("heloo");
    int i=1;
    for(;i<=10;i++);
    {
        printf("%d\n",i);
        i++;
    }
    printf("heloo");

// output --> heloo 11 heloo 








printf("heloo");
    int i1=1;
    for(;i1<=10;);
    {
        printf("%d\n",i1);
        i1++;
    }
    printf("heloo");


// output --> heloo           infinite loop









    printf("heloo");
    int i2=1;
    while(i2<=10);
    {
        printf("%d\n",i2);
        i2++;
    }
    printf("heloo");

// output --> heloo           infinite loop

}