#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30];
    char s2[30];

    gets(s1);
    gets(s2);
    
    // with strcat inbuilt function
    strcat(s1,s2);
    printf("%s\n",s1);


    // without inbuilt function

    char copy1[30];
    char copy2[30];
    printf("enter string1:\n");
    gets(copy1);
    printf("enter string1:\n");
    gets(copy2);
    int len1=strlen(copy1);
    int len2=strlen(copy2);

    for (int i=0;i<=len2;i++)
    {
        copy1[len1+i]=copy2[i];
    }

    printf("%s\n",copy1);


    char number_concat1[30];
    char number_concat2[30];

    printf("enter string1:\n");
    gets(number_concat1);
    printf("enter string2:\n");
    gets(number_concat2);

    strncat(number_concat1,number_concat2,4);
    printf("%s\n",number_concat1);
    // it will concat upto 4 characters of str2
}