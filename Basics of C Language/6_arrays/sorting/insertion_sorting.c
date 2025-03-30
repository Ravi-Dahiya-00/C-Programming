#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }


    
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}