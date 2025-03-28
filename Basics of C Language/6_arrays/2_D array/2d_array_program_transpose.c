#include <stdio.h>
int main()
{
    int m,n;
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
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }



    printf("Reverse of a matrix:\n");
    for (int i=m-1;i>=0;i--)
    {
        for (int j=n-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }




    printf("transpose of a matrix:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

}