#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // fgets() - Read a line of input including spaces
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);  // Read input
    str1[strcspn(str1, "\n")] = 0;     // Remove newline character

    printf("You entered: %s\n", str1);

    // strstr() - Find a substring inside a string
    char *subStr = strstr(str1, "hello");
    if (subStr != NULL) {
        printf("The word 'hello' is found in the input string.\n");
    } else {
        printf("The word 'hello' is NOT found in the input string.\n");
    }

    // strcmp() - Compare two strings
    printf("Enter another string to compare: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove newline character

    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;

}


// Function	Purpose	Why Used?	How It Works?
// fgets(str, size, stdin);	Reads a full line of text, including spaces.	scanf("%s") stops at spaces; fgets() reads entire input.	Reads up to size-1 characters, stores in str, and appends \0 at the end.
// strcspn(str, "\n");	Finds the first occurrence of \n in the string.	fgets() stores the newline \n, which can interfere with string comparison.	Finds the index of \n and replaces it with \0.
// strstr(str, "hello");	Searches for "hello" in str.	Checks if a word exists in a string.	Returns a pointer to the first occurrence of "hello" or NULL if not found.
// strcmp(str1, str2);	Compares two strings.	Strings cannot be compared using == in C.	Returns 0 if both strings are equal, a negative value if str1 < str2, and a positive value if str1 > str2.