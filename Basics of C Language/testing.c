#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello\nWorld";


    // Removing the newline character
    str[strcspn(str, "\n")] = 0;

    printf("Processed String: %s", str)
    return 0;
}
