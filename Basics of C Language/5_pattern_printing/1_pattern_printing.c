#include <stdio.h>
int main()
{
    // solid rectangle pattern
    for (int i=1;i<=3;i++)          //outer loop --> no of rows
    {
        for(int j=1;j<=5;j++)        // inner loop  --> no of columns
        {
            printf("* ");
        }
        printf("\n");
    }






    
// print 1 to 4 in rows and columns 4 times

        for (int i=1;i<=4;i++)              //no of lines 
        {
            for (int j=1;j<=4;j++)          // no of stars or pattern
            {
                printf("%d",j);
            }
            printf("\n");
        }






// star triangle pattern
        for (int i=1;i<=5;i++)
        {
            for (int j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }








printf("star triangle pattern invert\n");

//   star triangle pattern invert 
        for (int i=1;i<=5;i++)
        {
            for(int j=5;j>=i;j--)
            {
                printf("* ");
            }
            printf("\n");
        }




printf("no pattern printing with counting\n");

// no pattern printing with counting
    
        for (int i=1;i<=5;i++)
        {
            for (int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }






printf("no pattern printing with counting in reverse\n");

for (int i=1;i<=5;i++)
{
    for (int j=5;j>=i;j--)
    {
        printf("%d ",j);
    }
    printf("\n ");
}













printf("no pattern printing with odd digits only \n");

    for (int i=1;i<=10;i+=2)
    {
        for(int j=1;j<=i;j+=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }







printf("Alphabet printing\n");

// alphabet printing
    for (int i=1;i<=4;i++)
    {
        int a=1;
        for(int j=1;j<=4;j++)
        {
          printf("%c ",a+64);
          a++;
        }
        printf("\n");
    }




    printf("Alphabet printing one by one\n");

for (int i=1;i<=4;i++)
{
    for (int j=1;j<=i;j++)
    {
        printf("%c ",j+64);
    }
    printf("\n");
}












printf("Alphabet and no printing in sequence of rows\n");

for (int i=1;i<=6;i++)
{
    for(int j=1;j<=i;j++)
    {
        if (i%2!=0)
        {
            printf("%d ",j);
        }
        else {
            printf("%c ",j+64);
        }
       
    }
    printf("\n");
}










// star plus pattern printing
printf("star plus pattern printing\n");



for (int i=1;i<=5;i++)
{
    for (int j=1;j<=5;j++)
    {
        if(i==3 || j==3)
        {
            printf("* ");
        }
        else 
        {
            printf("  ");
        }
    }
    printf("\n");
}









// blank rectangle pattern
printf("blank rectangle pattern\n");
int n,m;
printf("enter no of rows:\n");
scanf("%d",&n);
printf("enter no of columns:\n");
scanf("%d",&m);


for (int i=1;i<=n;i++)
{
    for (int j=1;j<=m;j++)
    {
        if (i==1 || i==n || j==1 || j==m)
        {
            printf("* ");
        }
        else 
        {
            printf("  ");
        }
    }
    printf("\n");
}








// star cross pattern printing
printf("star cross pattern printing\n");

for (int i=1;i<=5;i++)
{
    for (int j=1;j<=5;j++)
    {
        if (i==j || (i+j)==6)
        {
            printf("* ");
        }
        else 
        {
            printf("  ");
        }
    }
    printf("\n");
}









// eloyd's triangle
printf("eloyd's triangle\n");

int a1=1;
for (int i=1;i<=5;i++)
{
    for (int j=1;j<=i;j++)
    {
        printf("%d ",a1);
        a1++;
    }
    printf("\n");
}




// eloyd's odd triangle
printf("eloyd's odd triangle\n");

int b=1;
for (int i=1;i<=5;i++)
{
    for (int j=1;j<=i;j++)
    {
        printf("%d ",b);
        b+=2;
    }
    printf("\n");
}









// 0 and 1 triangle

printf(" 0 and 1 triangle\n");

int x;
for (int i=1;i<=5;i++)
{
    if (i%2!=0) x=1;
    else x=0;
    for (int j=1;j<=i;j++)
    {
        printf("%d ",x);
        if (x==0) x=1;
        else x=0;
    }
    printf("\n");
}





}


