#include <stdio.h>
int main()
{
    int m,n,sum=0,col_sum=0;
    printf("Enter no of rows:");
    scanf("%d",&m);
    printf("Enter no of columns:");
    scanf("%d",&n);
    
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
        printf("Enter the value of %d %d element: ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }



    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            sum+=arr[i][j];
           
        }
        printf("\n%d row element sum : %d",i+1,sum);


        
        sum=0;
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            col_sum+=arr[j][i];
        }
        printf("\n%d column element sum: %d",i+1,col_sum);
        col_sum=0;
    }



}