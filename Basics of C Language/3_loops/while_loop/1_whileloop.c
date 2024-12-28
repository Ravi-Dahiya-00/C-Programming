#include <stdio.h>

int main()
{
    int i=1;
    while (i<=100)
    {
        printf("%d ",i);
        i++;
    }




    // post and pre increment and decrement
    int x=5;

    // post increment 
    printf("\n%d",x++);     //first use the value of x , then increase the value of x by 1       output=5
    // now value of x is increased by now it is 6.


    // pre increment 
    printf("\n%d",++x);     //first increase the value of x by 1 , then use it       output = 7 


    // same in decrement 


   
    // while (i=20) printf("\nA computer buff!!");
            // this will give infinite loop because here i is now 20 and 20=20
            // no terminating condition


    // while (i=10) 
    // {
    //     print("\n %d",i);
            // i=i+1;
    // }                      this will also give infinite loops 
        
    int x1=4,y1=0,z1;
        while (x1>=0)
        {
            x1--;
            y1++;

            if (x1==y1){
                continue;
                // if break is used it will go before the result of 2 2
            }
            else printf("\n%d %d",x1,y1);
        }
    // here -1 and 5 will be output because condition is checked after printing the result.

}