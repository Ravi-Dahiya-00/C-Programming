// In C, you can pass an array to a function by passing the address of its first element.
//  Arrays are always passed by reference, meaning any changes made inside the function affect the original array.
int avg(int[],int);

#include <stdio.h>
int main()
{
    int average;
    int arr1[5]={1,2,3,4,5};
    average=avg(arr1,5);                    //here we can also pass the size of array if we want to send it is optional
    printf("%d",average);

    // if we will write here size of array then it will print 20 because it will 4 * 5 bytes
    printf("Size of array:%d",sizeof(arr1));
}

int avg(int average[],int a)
{
    int sum=0,final_avg;
    for (int i=0;i<a;i++)
    {
        sum+=average[i];
    }
    final_avg=sum/a;
    printf("Size of array:%d\n",sizeof(average));
    // here we will get only 4 because average is pointer in the avg function and we will also get a error as it is a pointer
    return final_avg;
}
