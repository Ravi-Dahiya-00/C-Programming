// cd "C:\MY Coding\C Programming\Basics of C Language"
// gcc 1_basics.c
// .\a



// link section
#include <stdio.h>
#include <conio.h>     

// include :
            // including something
// stido.h :
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

    //updation of a variable
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
    return 0;
}











