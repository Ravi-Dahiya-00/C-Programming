#include <stdio.h>

int main(){

    // break statement 

      //   checking if the number is prime or not 

       
 int prime_number,checking_number=0;
    printf("\n Enter a number to check prime or not : ");
    scanf("%d",&prime_number);

    if (prime_number<=1)
    {
            printf("this number is not prime");
    }

    
    if (prime_number==2)
    {
            printf("this number is prime");
    }
    for (int i=2;i<prime_number;i++)
    {
       if (prime_number%i==0 )
        {             
            checking_number=checking_number+1;
            break;

        };
        if (checking_number==0)
        {
            printf("this number is prime");
        }
        else if (checking_number==1)
        {
            printf("this number is not prime");
        }
        
    }

    printf("\n");


    // continue statement 

    // odd numbers from 1 to 100 using continue statement 

    for (int i=1;i<=100;i++)
    {
        if (i%2==0)
        {
            continue;
        }
        printf("%d ",i);
    }


}