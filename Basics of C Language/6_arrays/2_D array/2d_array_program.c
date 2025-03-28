#include <stdio.h>
int main()
{
    int m,n,sum=0;
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
            sum+=arr[i][j];
        }
        printf("\n");
    }

    printf("SUm of all the elements of matrix is %d",sum);


    return 0;

}