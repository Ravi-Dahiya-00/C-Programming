#include <stdio.h>

int main(){

        // using logical operators 

        // && (and and) and || (or or)


        // checking a number is 3 digit or not
        int number_check;
        printf("enter a number to check is it 3 digit or not : ");
        scanf("%d",&number_check);

        // using and operator to satisfy two conditions
        if (number_check>99 && number_check<999)
        {
            printf("number is a 3 digit number.");
        }

        else
        {
            printf("this is not a 3 digit number.");
        }






        // use of || (or) operator
        int two_divisible_number;
        printf("\nenter a number that you want to check is divisible by 3 and 5 : ");
        scanf("%d",&two_divisible_number);
        if (two_divisible_number%3==0 || two_divisible_number%5==0)
        {
            printf("number is divisible by either 3 or 5.");
        }

        else{
            printf("this is number is not divisible by either 3 or 5.");
        }








        // printing greatest integer out of outputs
        int first_number,second_number,third_number;
        printf("\nenter 1st number : ");
        scanf("%d",&first_number);
        printf("enter 2nd number : ");
        scanf("%d",&second_number);
        printf("enter 3rd number : ");
        scanf("%d",&third_number);

        if (first_number>second_number && first_number>third_number)
        {
            printf("biggest number from the given input is %d",first_number);
        }
        if (first_number<second_number && second_number>third_number)
        {
            printf("biggest number from the given input is %d",second_number);
        }
        if(first_number<third_number && second_number<third_number)
            {
            printf("biggest number from the given input is %d",third_number);
        };







        // checking these three numbers can be the sides of triangle or not 
        if (((first_number+second_number)>third_number) && ((first_number+third_number)>second_number) && ((second_number+third_number)>first_number)){
            printf("\nyes these three numbers can be the sides of a triangle ");
        }

        else{
            printf("\nthese three numbers cannot be the sides of a triangle ");
        };









    // // nested if else 
        int given_number;
        printf("\nEnter a number to check divisibility by 3 and 5 : ");
        scanf("%d",&given_number);

        if (given_number%3==0){
            if (given_number%5==0){
                printf("number is divisible by both 3 and 5");
            }
            else{
                printf("The number is divisible by 3 but not by 5.");
            }
        }
        else if (given_number%5==0){
                printf("The number is divisible by 5 but not by 3.");
        }
        else {
            printf("the number is nor divisible by 5 or 3");
        }
    









    // checking a number divisible by 3 or 5 but not by 15
    int number_to_check;
    printf("enter the number you want to check divisible by 3 or 5 but not by 15 : ");
    scanf("%d",&number_to_check);

    if (number_to_check%3==0)
    {
        if(number_to_check%5==0)
        {
            if (number_to_check%15==0)
            {
                printf("the number is also divisible by 15.");
            }
        }
        else
        {
            printf("the number is divisible by 3.");
        }
    }

    else if(number_to_check%5==0){
        printf("the number is divisible by 5");
    }

    else{
        printf("the number is nor divisible by 3 or 5");
    }







    return 0;
}