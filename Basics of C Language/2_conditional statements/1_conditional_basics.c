#include <stdio.h>

int main() {
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // 1. Simple if statement
    if (num > 0) {  // If num is positive
        printf("The number is positive.\n");
    }






    // 2. if-else statement
    if (num % 2 == 0) {  // Check if the number is even
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }







    // 3. Nested if-else (if inside another if)
    // ✅ Always use curly braces { } in nested if-else to avoid ambiguity
    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive and non-zero.\n");
        }
    } else {
        printf("The number is negative.\n");
    }










    // 4. Else-if ladder (multiple conditions)
    // ✅ The first true condition executes, and the rest are skipped
    if (num > 100) {
        printf("The number is greater than 100.\n");
    } else if (num > 50) {
        printf("The number is between 51 and 100.\n");
    } else if (num > 0) {
        printf("The number is between 1 and 50.\n");
    } else {
        printf("The number is zero or negative.\n");
    }




    // 5. Ternary operator (shorter way to use if-else)
    // ✅ Best used for simple conditions to improve readability
    // ⚠️ Avoid using ternary operators for complex logic, as it reduces code clarity
    (num % 5 == 0) ? printf("The number is divisible by 5.\n") : printf("The number is not divisible by 5.\n");












    // 6. Dangling else problem (Unmatched else)
    int x = 10, y = 20;

    // ❌ Problem: The else statement here belongs to the nearest unmatched if (x == 10), not (x > y)
    if (x > y)
        if (x == 10)
            printf("X is 10\n");
    else
        printf("Y is greater than X\n");  // This will NOT execute as expected

    // ✅ Solution: Use curly braces { } to explicitly specify the correct if-else pairing
    if (x > y) {
        if (x == 10) {
            printf("X is 10\n");
        }
    } else {  // Now this belongs to (x > y)
        printf("Y is greater than X\n");
    }








    // 7. if-else with logical operators (AND, OR, NOT)
    // ✅ Logical operators help combine multiple conditions in a single if statement
    if (num > 0 && num % 2 == 0) {  // AND operator (&&) - both conditions must be true
        printf("The number is positive and even.\n");
    }

    if (num < 0 || num == -10) {  // OR operator (||) - at least one condition must be true
        printf("The number is either negative or exactly -10.\n");
    }

    if (!(num == 5)) {  // NOT operator (!) - reverses the condition
        printf("The number is NOT 5.\n");
    }

    return 0;
}
