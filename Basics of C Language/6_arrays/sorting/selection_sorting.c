// swap the first element with the smallest element , then swap the second element with the smallest element and so on....... upto n-2 in an array

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



    for (int i=0;i<n-1;i++)
    {
       
        for ( int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
      

    }


    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

