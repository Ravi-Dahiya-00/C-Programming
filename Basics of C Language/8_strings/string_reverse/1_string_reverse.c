#include <stdio.h>
#include <string.h>
int main()
{
    char arr[30];
    fgets(arr,sizeof(arr),stdin);

    arr[strcspn(arr,"\n")]='\0';
    
    char ch;
    int l=strlen(arr);

    for (int i=0;i<(l/2);i++)
    {
        ch=arr[i];
        arr[i]=arr[l-1-i];
        arr[l-1-i]=ch;
    }

    printf("%s\n",arr);


    printf("reversing the string again using builtin function:\n");
    strrev(arr);
    printf("%s",arr);
}
