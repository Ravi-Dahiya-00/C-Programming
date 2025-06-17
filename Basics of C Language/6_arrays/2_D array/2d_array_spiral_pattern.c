#include <stdio.h>
void takeInput(int m, int arr[m][m])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void spiralOrder(int m, int arr[m][m])
{
    int count=0;
    int total_element=m*m;
    int min_row=0;
    int min_col=0;
    int max_row=m-1;
    int max_col=m-1;
    while (count<total_element)
    {
        for (int i=min_col;i<=max_col && count<total_element;i++)
        {
            printf("%d ",arr[min_row][i]);
            count++;
        }
        min_row++;
        for (int i=min_row;i<=max_row && count<total_element;i++)
        {
            printf("%d ",arr[i][max_col]);
            count++;
        }
        max_col--;
        for (int i=max_col;i>=min_col && count<total_element;i--)
        {
            printf("%d ",arr[max_row][i]);
            count++;
        }
        max_row--;
       for (int i=max_row;i>=min_row && count<total_element;i--)
       {
            printf("%d ",arr[i][min_col]);
            count++;
       }
       min_col++;
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    int arr[m][m];
    takeInput(m, arr);
    spiralOrder(m, arr);
    return 0;
}