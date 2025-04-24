#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    
    printf("Enter first string:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string:");
    fgets(str2,sizeof(str2),stdin);

    str1[strcspn(str1, "\n")] = '\0';  
    str2[strcspn(str2, "\n")] = '\0';  

    /*strcspn() is a function from <string.h>. It stands for:
String Complement Span
It returns the index of the first character in the string (str1) that matches any character in the second string ("\n").*/
    int flag=0;
    for (int i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if (str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }

    if (flag==1)
    {
        printf("These strings are not equal");
    }
    else 
    {
        printf("These strings are equal");
    }
}