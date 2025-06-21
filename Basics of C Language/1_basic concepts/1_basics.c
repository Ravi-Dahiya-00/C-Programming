// cd "C:\MY Coding\C PROGRAMMING\Basics of C Language"
// gcc 1_basics.c
// .\a


// 16348

// link section
#include <stdio.h>
#include <conio.h>     

// include :
            // including something 

// Name --> PreProcessor Directive
// Explanation --> Used to include Header files



 
// stdio.h :
            // standard input output     header files

// this stdio.h header defines three variable types,several macros , and a variety of input and output functions





// printing statements in C.

// main function :
                // execution of code begins from main function
    

int main()
{
    printf("hello world");
    printf("continue on same line");
    printf("\n");
    printf("this is for new line\n");
    printf("\nthis is for new line\nhello world          this will give space\n");






// % is format data specifier , what type of data type we want to take as input and store to print.












    // Keywords : 
                // keywords are the special predefined, reserved words used in programming that have special meaning to compiler.
        
                // these are part of syntax , cannot be used as identifiers 

                // 32 keywords in C in (ISO C90 standard) but in c99 and c11 later version there are 44 keywords.






    // Identifiers :
                    // identifiers are the building blocks of a program .
                    // identifiers are the unique name that are assigned to a variables , structs , functions , and other entities.
                    // used to uniquely identify the entity within the program.
                     
                    // int age=10;     age is identifier assigned to a character type value.

            

//Relationship Between Identifiers and Variables :
                                // An identifier is the name of a variable.
                                // A variable is a type of identifier specifically used to store data.
        
// Key Differences
// Aspect	                              Identifier	                                                       Variable
// Definition	                    Name used to identify program elements.	                            Named memory location to store data.

// Type                         	Doesn't have a type.                                            	Has a data type (int, float, etc.).

// Example	                        age, salary, main, _index	                                        int age = 25;





int age_identifier_variable;  // "age" is an identifier (no value yet).

age_identifier_variable = 25;  // "age" is now a variable holding the value 25.







// variables in C
            // variable is an identifier which is used to store some value.
            // variables can change during the execution of the program and update the value stored inside it.
            

    // declaration of variable 
    int x;                     // int for making a variable for storing a integer value
    x=6;                       // initializing value to x
    printf("\n%d",x);


    printf("\n");

    //updating of a variable
    x=10;
    printf("%d",x);

    x=x+6;
    printf("\n%d",x);

    x-=4;
    printf("\n%d",x);


    // declaring a second variable and printing in new line with \n
    int y;
    y=400;
    printf("\n%d",y);






    // Constants : 
                // It is similar to the variable but the constant only holds only one value during the program execution.

                // created by 'const' keyword
                // using #define preprocessor

            const int constant_example=13;
            #define CONSTANTNAME 10     //defining by #define
            #define PI 3.14159 // Define a constant for pi

              printf("Value of PI: %f\n", PI);
              printf("Value of constant: %d\n", constant_example);


             
















    // literals in C
    // this we are doing \n for new line %d for printing integer these special characters are called literals.
















// Operators in C 




    // arithmetic operators in C

    int a=10;
    int b=4;

    printf("\n%d\n",a+b);                               // addition
    printf("%d\n",a-b);                                // subtraction
    printf("%d\n",a*b);                              // multiplication
    printf("%d\n",a/b);                            // division  : it will give round of integer because %d means we are printing integer not a float no


    int data1=b*(a+b);
    printf("%d\n",data1);






    // float data types  :                %f is used to print float data types

    float float1=3.1;
    float float2=2.3;
    printf("%f\n",float1*float2);




    // this float gives always upto 6 decimals but if we want to get upto some decimal place we can use %.2f


    float x1=10;
    float y1=4;
    printf("%.2f\n",x1/y1);


    float new_float= 5/2;                    // this will give 2.000 because 5 and 2 are int and it will give 2 and we are storing it into a float 
    printf("%f\n",new_float);



    float new_float2= 5.0/2;                    // it will give 2.500 because if we one float any of the digit it will bve considered as the float
    printf("new float value : %f",new_float2);






    // volume of a sphere 
    // 4*pi*r*r*r / 3

    int radius=5;
    float pi=3.14;
    printf("The Volume Of Sphere is : %f\n",4*radius*radius*radius*pi / 3);





    // calculating simple interest formula
    // ( principle * rate * time ) / 100 

    float principle,time,rate ;                      //  defining 3 variables in same line  
     principle = 100000;
     rate = 12 ;
     time = 5 ;

    printf("total interset is : %f\n",(principle*rate*time)/100);










    // %d  --> int 
    // %f  --> float
    // %c  --> char 
    // %lf  --> double 
    // %s  --> string
    // %ld  --> longint



// range of data types :
            // data types a specific range upto which they can give correct answer after that we have to use another data type.









    

    




    puts("Welcome to C programming!");
    // Purpose: Displays a string followed by a newline without /n.
       



    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("Hello, %s!\n", name);
    // Purpose: Reads an entire line of input, including spaces, until a newline is encountered.





    char ch_1 = getchar();
    printf("%c",ch_1);
    // getchar(): Reads a single character,first given character only.

    putchar(ch_1);
    // putchar(): Writes a single character,only first given character.






    // int age = "twenty";              // Error: Incompatible data type


    return 0;
// this statement shows the exit status of a function.

}
