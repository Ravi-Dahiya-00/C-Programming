#include <stdio.h>

int main()
{
    // int i=1 for declaring a variable i=1          , i<=10 jab tak         , i++ is equal to i=i+1  
    // initialization , condition  , increment/decrement
    for (int i=1;i<=10;i++){
        printf("hello world\n");
    }



    // printing numbers from 1 to 100 
    
    for (int i=1;i<=100;i++){
        printf("%d\n",i);
    }



    // even numbers from 1 to 100

    for (int i=2;i<=100;i++){
        if (i%2==0){
        printf("%d\n",i);
        }
    }



    // odd number from 1 to 100

    for (int i=1;i<=100;i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
    }




    // printing a table of any number
    int table_number;
    printf("enter a number of which table you want : ");
    scanf("%d",&table_number); 
    for (int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",table_number,i,table_number*i);
    }







    // displaying an AP upto n numbers 
    // ap=a+(n-1)d

    int first_number;
    printf("enter a number : ");
    scanf("%d",&first_number);
    for (int i=1;i<=2*first_number-1;i=i+2)
    {
        printf("%d ",i);
    }




    // printing a ap upto n terms 
    // 4,7,10,13,16,..........
    int ap_number;
    printf("\nenter a number for length of AP : ");
    scanf("%d",&ap_number);
    for (int i=4;i<=3*ap_number+1;i=i+3)
    {
        printf("%d ",i);
    }





    









}