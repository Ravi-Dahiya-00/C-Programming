#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    float arr[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1)
            {
                arr[i][j]*=0.75;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%.1f ",arr[j][i]);
        }
        printf("\n");
    }
}  