#include <stdio.h>
int main()
{
    // string : array of characters
    // Strings are not data type they are arrays of characters.



    // declaration of string
    char stringname[10];
    // stringname contains the base address of this character type array means first element 
    // we can store only 9 elements in this because the last we always store null character ( \o )


    char name[20]="Ravi";
    // it has 5 elements last element is \o null character
    char special_name[20]="Ravi Yadav";
    // special characters are also allowed

    // special_name[10]="Ravi yadav";
    // this is wrong initialization and declaration should be in same line

    char second_type[10]={'R','a','v','i','\0'};

    char without_size[]={'R','a','v','i','\0'};

    // int a=without_size;
    // this is wrong method 

}