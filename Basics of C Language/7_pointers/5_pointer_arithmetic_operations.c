// we can subtract two pointers as well as we can also subtract any integer value from the pointer
// if we subtract two pointers it will give result in int
// if we will subtract any int from pointer it will give result in pointer
#include <stdio.h>
int main()
{    
    int a[]={1,2,3,4,5};
    int *p=a;                // array always holds the address of the first element so it is same as a[0]
    int *q=&a[3];

    printf("address of pointer p :%p\n",p);
    printf("address of pointer q :%p\n",q);
  
    int d=q-p;
    printf("pointer pointer subtraction :%d\n",d);
  
    // first it will subtract the address of p from address of a , then it will divide the resultant by size of the data type of that pointer


    q=q-2;
    // it is similar as addition we will be moving by 2 position in that array and the result here we will get will be any address not a int
    //  address of q-(2*size of data type)
    printf("%d\n",*q);


    // if we will move out of the array then memory location will be there but it will give garbage value
    p=p-1;
    printf("%d\n",*p);
    


}