#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
   int target;
   scanf("%d",&target);
   
    int low=0,high=n-1,mid;
    int min_diff=abs(arr[0]-target);
    int close=arr[0];
    
    
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==target) printf("%d",mid);
        
        int current_diff=abs(arr[mid]-target);
        if (current_diff<min_diff)
        {
            min_diff=current_diff;
            close=arr[mid];
            
        }
        
        else if (arr[mid]>target) high=mid-1;
        else low=mid+1;
        
    }
    
    printf("%d",close);
    

}