#include <stdio.h>
int main(){

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

        }
        if (checking_number==0)
        {
            printf("this number is prime");
        }
        else
        {
            printf("this number is not prime");

        }
        
    }



return 0;
}