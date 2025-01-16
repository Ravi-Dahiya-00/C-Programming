#include <stdio.h>

int main(){
    float radius;
    printf("enter radius : ");
    scanf("%f",&radius);                                 // here & gives the address of radius 
    float pi=3.14;
    float area=pi * radius * radius ;
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
    float converted_integer = given_integer;
    float half_number = converted_integer/2;
    printf("\n half of the given number is :%f",half_number);


    // float to integer 
     float given_float_number,fractional_part;
    printf("\nEnter the number you want to get its fractional part : ");
    scanf("%f",&given_float_number);

    int converted_float=given_float_number;
    printf("%d",converted_float);

    fractional_part=given_float_number-converted_float;

    printf("\nfractional part of the given number is : %f",fractional_part);

    







    // characters in C : 
                        // C language have 256 characters.

    // types of set Character : 
                        //  1.Alphabets 
                                // UPPERCASE --> A - Z
                                // lowercase --> a - z
                        
                        //  2.Digits 
                                // 0 to 9
                        
                        // 3. special symbols
                                //  , . ! ! # (  %  and so many 
                            
    // all the characters have there different ASCII values












    // char data types (a to z and special characters and we can also store numbers in it )
    char character_variable='r';       // this char can only hold single character in it , we cannot put "ravi" in it 
    printf("\n%c",character_variable);




    // ASCII VALUE 
    // every character has a ASCII value that is different for different characters.

    char ascii_character='A';               // 65 for A and 97 for a 
    printf("\n%d",ascii_character);             

     char ascii_character2='@';
    printf("\n%d",ascii_character2);



// char takes 1 byte
// int takes 4bytes

    // Short data type : 
                        // It can store int only between -32768 to 32767
        // this takes 2 bytes (16bits) in the memory when it creates a box
        // it can store 2**n numbers here it can store 2**16 = 65536 it is divided into negative and positive to take these limits
        short short_number=232;
        printf("\n%d",short_number);


    
    // long data type:
                    // in past it was used to store large values when int was not capable of holding large values
                // it takes 8bytes
        long long_number=12342323;
        printf("\n%d",long_number);


    // long long data type:
                            // it can store so much big values 
        // it takes 
        long long longest_number=1238998931;
        printf("\n%d",longest_number);
        

    return 0;

}




