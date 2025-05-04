#include <stdio.h>
#include <string.h>
int main()
{

    
    
    int x = 100, y = 20;

    // ❌ Problem: The else statement here belongs to the nearest unmatched if (x == 10), not (x > y)
    if (x > y)
    {
        if (x == 10)
            printf("X is 10\n");
    }
    else
        printf("Y is greater than X\n");  // This will NOT execute as expected


}