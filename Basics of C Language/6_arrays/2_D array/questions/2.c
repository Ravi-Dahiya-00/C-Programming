#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);

    float arr[n][m];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }


    float transpose[m][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    
    

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==2 || i==3)
            {
                transpose[i][j]-=1.5;
            }
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%.2f",transpose[i][j]);
        }
        printf("\n");
    }

}