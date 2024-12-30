#include <stdio.h>

int main(){


// in do while 1 time the loop will run either condition is true or false because code is written first before condition.
    int i=10;
    do {
        printf("hello world");
        i++;
    } while (i<10);




    // counting the digit of a number 

    int input_number,number_count=0;
    printf("\nenter a number to count its digit : ");
    scanf("%d",&input_number);

    while (input_number>=9)
    {
        input_number=input_number/10;
        number_count=number_count+1;

    }
        printf("%d",number_count+1);

    


    // counting the sum of the digits

    int sum_number_input,sum=0;
    printf("\nenter a number to get the sum of its digit :");
    scanf("%d",&sum_number_input);

    while(sum_number_input>0)
    {
        sum=sum+sum_number_input%10;
        sum_number_input=sum_number_input/10;
    }
    printf("%d",sum);
    

    



    // counting the sum of the all the even digits of the given number 

    
    int sum_number_input1,sum1=0,last_digit;
    printf("\nenter a number to get the sum of its digit :");
    scanf("%d",&sum_number_input1);

    while(sum_number_input1>0)
    {
        
        last_digit=sum_number_input1%10;
        if (last_digit%2==0)
        {
            sum1=sum1+last_digit;
        }
        sum_number_input1=sum_number_input1/10;
        
    }
    printf("sum of even digits is : %d ",sum1);
    
    




    // printing the reverse of a given number 

    int reverse_number_input,reverse_number=0,sum_of_both,reverse_number_input1;
    printf("\n Enter a number to reverse its digit : ");
    scanf("%d",&reverse_number_input);
    reverse_number_input1=reverse_number_input;
    while (reverse_number_input>0)
    {
        reverse_number=reverse_number+reverse_number_input%10;
        reverse_number_input=reverse_number_input/10;
        reverse_number=reverse_number*10;
    }
    reverse_number=reverse_number/10;
    printf("Reverse number of given digit is : %d",reverse_number);
    sum_of_both=reverse_number_input1+reverse_number;
    printf("\n sum of both given number and input number : %d",sum_of_both);










    
    return 0;
}

