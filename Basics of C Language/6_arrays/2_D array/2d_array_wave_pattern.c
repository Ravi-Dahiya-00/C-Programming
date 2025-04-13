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



    // simple wave print row wise 

    printf("\nsimple wave print row wise :\n");

    

    for (int i=0;i<m;i++)
    {
        if (i%2==0)
        {
            for (int j=0;j<n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else 
        {
            for (int j=n-1;j>=0;j--)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }




    // wave pattern column wise 


    printf("\nwave pattern column wise :\n");


    for (int j=0;j<n;j++)
    {
        if (j%2==0)
        {
            for (int i=m-1;i>=0;i--)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else 
        {
            for (int i=0;i<m;i++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
}