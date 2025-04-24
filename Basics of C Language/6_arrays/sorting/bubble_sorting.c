// in this we move the largest element to the last one by one and do not check the last element in next iteration because it is already sorted 


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



    // 1 4 5 3 2
    for (int i=n-1;i>=1;i--)
    {
        for (int j=0;j<=i;j++)
        {
            if (arr[j]>arr[j+1])
            {
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }




}