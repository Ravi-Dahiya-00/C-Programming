// learn in unit3 again about goto after return

#include <stdio.h>
int main()
{
    int x;
    printf("enter a number : %d",&x);

    if (x%2==0)
    {
        goto even;
        // printf("Hello");
    }

    else {
        goto odd;
    }

    even:
        printf("this is even number");
        return 0;
        // if return is not used here it will also print odd also because it will consider it as a part of even statement because no return statement is there 
    odd:
        printf("this is odd number");
        return 0;
    
        return 0;
}