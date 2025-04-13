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

    

    if (m!=x || n!=y)
    {
        printf("Matrix addition can not be done.");
    }



else 
{
    int result[m][n];
    int arr1[m][n];


    // taking input for array1
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
        printf("Enter the value of %d %d element: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }


    // taking input for array2
    int arr2[x][y];

    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
        printf("Enter the value of %d %d element: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }




    

    
    // adding array1 and array2
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                result[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
    


    // printing the result after adding two array elements
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}








}