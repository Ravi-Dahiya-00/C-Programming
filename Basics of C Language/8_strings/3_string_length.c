#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    gets(name);
    printf("enter name is : %s\n",name);
    int count=strlen(name);                             //it counts all the elements of the string except null character
    printf("length of string is :%d\n",count);


    int count1=0,i=0;
    while (name[i]!='\0')
    {
        count1++;
        i++;
    }
    printf("length of string is :%d\n",count1);


}