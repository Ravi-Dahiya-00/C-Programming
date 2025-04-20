#include <stdio.h>

int main()
{
    // To read a string using scanf in C, you can use the %s format specifier.

    char str[100],str2[100];  // make sure the size is enough to store the input
    scanf("%s", str);
    printf("You entered: %s\n", str);
    
    // This will only read a single word (i.e., it stops reading input at the first whitespace like space, tab, or newline).
    // For example, if you input Hello World, only Hello will be stored in str.
    // we do not need to put & for input because str is pointing to the starting elements address of str.


    scanf("%s",str2);
    printf("You entered first 10 characters are: %10s\n", str2);
    printf("You entered five characters after 10: %10.5s\n", str2);

    // this %10s means it will read first 10 characters 
    // this %10.5s means it will read first 5 characters after 10 first character 


    char str3[100];
    printf("Enter a string (including spaces): \n");
    gets(str3);  // ✅ Correct usage (no format specifier)
    printf("You entered: %s\n", str3);
    // this gets the complete line including space upto when enter is not clicked

    // ⚠️ Note: gets() is unsafe and has been deprecated in newer C standards (C11 and later) because it does not perform bounds checking, which may lead to buffer overflow. Prefer fgets() instead. 


    printf("%s\n",str3);
    puts(str3);
    puts(str3); 

    // puts automatically add a new line operator 

    
    printf("%s\n",&str3[2]);
    // it will start printing from 3rd element of string because now we have specified address start from 3rd element of str3.

}