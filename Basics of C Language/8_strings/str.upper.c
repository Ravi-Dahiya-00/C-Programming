#include <stdio.h>
#include <string.h>
int main()
{
    char str[30]="Ravi Yadav";

    // strlwr(s1);
    // strupr(s1);      this functions are not in c in new version

    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }

    printf("%s",str);
}