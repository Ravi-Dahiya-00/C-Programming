#include <stdio.h>

int main(){
    float radius;
    printf("enter radius : ");
    scanf("%f",&radius);                                 // here & gives the address of radius 
    float pi=3.14;
    float area=pi * radius *radius ;
    printf("%f\n",area);




    int number1,number2;
    printf("enter 1st number :");
    scanf("%d",&number1);
    printf("enter 2nd number :");
    scanf("%d",&number2);

    printf("sum of entered number is : %d \n",number1+number2);


    // short method to write the same program
    int new_number1,new_number2,sum1;
    printf("enter values of p and q :");                         // we cannot write this statement while taking the input
    scanf("%d %d",&new_number1,&new_number2);
    
    sum1=new_number1+new_number2;
    printf("%d",sum1);




// finding reminder of two numbers

    int operator1,operator2;
    printf("\nEnter First Number: ");
    scanf("%d",&operator1);
    printf("Enter Second Number: ");
    scanf("%d",&operator2);
    

    int operators_quotient,operator_multiplication,operator_reminder;
    operators_quotient=operator1/operator2;
    operator_multiplication=operators_quotient*operator2;
    operator_reminder=operator1-operator_multiplication;
    printf("your reminder is : %d",operator_reminder);



    // modulo operator is also used to find reminder of two numbers
    printf("\nthis is reminder :%d",operator1%operator2);

    // if it is divided by big number then itself or number 0 we will only get the same number that is itself.









     // integer to float 
    int given_integer;
    printf("\n enter number of which you want to half:");
    scanf("%d",&given_integer);
    float converted_integer = given_integer ;
    float half_number = converted_integer/2;
    printf("\n half of the given number is :%f",half_number);


    // float to integer 
     float given_float_number,fractional_part;
    printf("Enter the number you want to get its fractional part : ");
    scanf("%f",&given_float_number);

    int converted_float=given_float_number;
    printf("%d",converted_float);

    fractional_part=given_float_number-converted_float;

    printf("fractional part of the given number is : %f",fractional_part);

    




    // char data types (a to z and special characters and we can also store numbers in it )
    char character_variable='r';       // this char can only hold single character in it , we cannot put "ravi" in it 
    printf("%c",character_variable);

    return 0;

}




