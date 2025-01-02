// cd "C:\MY Coding\C PROGRAMMING\Basics of C Language"
// gcc 1_basics.c
// .\a



// link section
#include <stdio.h>
#include <conio.h>     

// include :
            // including something
// stdio.h :
            // standard input output     header files


// printing statements in C.
int main()
{
    printf("hello world");
    printf("continue on same line");
    printf("\n");
    printf("this is for new line\n");
    printf("\nthis is for new line\nhello world          this will give space\n");







// variables in C

    // declaration of variable 
    int x;                     // int for making a variable for storing a integer value
    x=6;                       // initializing value to x
    printf("%d",x);


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


    // literals in C
    // this we are doing \n for new line %d for printing integer these special characters are called literals.







    // arithmetic operators in C

    int a=10;
    int b=4;

    printf("\n%d\n",a+b);                                          // addition
    printf("%d\n",a-b);                                          // subtraction
    printf("%d\n",a*b);                                          // multiplication
    printf("%d\n",a/b);                                          // division  : it will give round of integer because %d means we are printing integer not a float no


    int data1=b*(a+b);
    printf("%d\n",data1);






    // float data types  :                %f is used to print float data types

    float float1=3.1;
    float float2=2.3;
    printf("%f\n",float1*float2);



    float x1=10;
    float y1=4;
    printf("%f\n",x1/y1);


    float new_float= 5/2;                    // this will give 2.000 because 5 and 2 are int and it will give 2 and we are storing it into a float 
    printf("%f\n",new_float);



    float new_float2= 5.0/2;                    // it will give 2.500 because if we one float any of the digit it will bve considered as the float






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

//hello





    return 0;


}
