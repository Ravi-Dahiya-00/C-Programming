#include <stdio.h>
#include <string.h>


/*It compares two strings character by character.

It returns:
0 if both strings are equal.
A positive value if str1 > str2.
A negative value if str1 < str2.*/


int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline character if any
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result > 0)
        printf("First string is greater by ASSCI value.\n");
    else
        printf("Second string is greater by ASSci value.\n");

    return 0;
}