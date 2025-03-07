#include <stdio.h>
#define N 5    // this is macro , here we define n as 5 and we can use n as 5 in our complete program 
int main()
{
    // array is a collection of similar data types
    
    int rollno[5]; 
    // declared a array of size 5
    // rollno is a array of 5 integers
    // it will take 4*5=20 bytes of memory

    int marks[N]={10,20,30,40,50};
    // declared a array of size 5 and initialized it with 5 values

    // int a[0];  this is wrong , array size should be greater than 0
    //  int a[0]={10}; this is wrong , array size should be greater than 0

    int a[4*4]; // this is correct , array size can be any positive integer

}