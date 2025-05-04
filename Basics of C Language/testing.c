#include <stdio.h>
#include <string.h>
int main()
{
    // char str[30]="Ravi Yadav";

    // strlwr(s1);
    // strupr(s1);      this functions are not in c in new version

    char str[30];
    printf("enter a string: \n");
    gets(str);
    // for lowercase 
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    printf("lower case : %s\n",str);


    // for upper case 
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }

    printf("upper case : %s\n",str);
}