#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string (including spaces): ");
    gets(str);  // ✅ Correct usage (no format specifier)

    printf("You entered: %s\n", str);

    return 0;
}
