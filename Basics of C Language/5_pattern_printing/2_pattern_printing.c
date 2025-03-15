#include <stdio.h>
int main()
{

    // star triangle mast pattern

printf("star triangle mast pattern\n");

for (int i=1;i<=5;i++)
{
    for (int j=1;j<=5-i;j++)
    {
        printf("  ");
    }
    for (int k=1;k<=i;k++)
    {
        printf("* ");
    }
    
    printf("\n");
}





// rhombus pattern printing question
printf("rhombus pattern printing\n");

for (int i=1;i<=5;i++)
{
    for (int j=5;j>=i;j--)
    {
        printf(" ");
    }
    for(int k=1;k<=5;k++)
    {
        printf("*");
    }
    for (int q=5;q>=i;q--)
    {
        printf(" ");
    }
    printf("\n");
}







// reverse alphabet triangle 

printf("reverse alphabet triangle\n");

for (int i=1;i<=5;i++)
{
    int a=64;
    for (int j=5;j>=i;j--)
    {
        printf(" ");
    }
    for (int k=1;k<=i;k++)
    {
        a++;
        printf("%c",a);
    }
    printf("\n");
}











// star pyramid 
for (int i=1;i<=5;i++)
{
    for(int j=1;j<=(5-i);j++)
    {
        printf(" ");
    }
    for (int k=1;k<=i;k++)
    {
        printf("*");
    }
    for (int q=2;q<=i;q++)
    {
        printf("*");
    }
    printf("\n");
}







    return 0;
}
