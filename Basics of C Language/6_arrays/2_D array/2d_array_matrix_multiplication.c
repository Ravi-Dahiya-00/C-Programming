#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter no of rows for 1st matrix:");
    scanf("%d",&m);
    printf("Enter no of columns for 1st matrix:");
    scanf("%d",&n);

    int x,y;
    printf("Enter no of rows for 2nd matrix:");
    scanf("%d",&x);
    printf("Enter no of columns 2nd matrix:");
    scanf("%d",&y);

    

    if (n!=x)
    {
        printf("Matrix multiplication can not be done.");
    }


else 
{
    int arr1[m][n];

    printf("\nEnter elements for 1st matrix: ")

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
        printf("Enter the value of %d %d element for 1st matrix: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

     
    int arr2[x][y];

    printf("\nEnter elements for 2nd matrix: ")

    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
        printf("Enter the value of %d %d element for 2nd matrix: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }





    int s=n;

    int multiple_matrix[m][y];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<y;j++)
        {
            multiple_matrix[i][j]=0;
            for (int k=0;k<s;k++)
            {
                multiple_matrix[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }


    for (int i=0;i<m;i++)
    {
        for (int j=0;j<y;j++)
        {
            printf("%d ",multiple_matrix[i][j]);
        }
        printf("\n");
    }

}

    return 0;
    
}
