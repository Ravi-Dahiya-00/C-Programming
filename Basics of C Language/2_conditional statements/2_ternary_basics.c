#include <stdio.h>

int main() {
    int num1, num2, num3, max, min, absValue;
    
    // Taking user input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    // 1. Simple ternary operator (Basic usage)
    // ✅ The ternary operator is a shorter way of writing an if-else statement.
    // ✅ Syntax: condition ? expression_if_true : expression_if_false;
    max = (num1 > num2) ? num1 : num2; 
    printf("The maximum of first two numbers is: %d\n", max);
    








    // 2. Nested ternary operator (Handling multiple conditions)
    // ✅ When multiple conditions need to be checked, ternary operators can be nested.
    // ✅ Works similar to an else-if ladder.
    max = (num1 > num2) ? 
              ((num1 > num3) ? num1 : num3)  // If num1 is greater than num2, compare it with num3
            : ((num2 > num3) ? num2 : num3); // If num2 is greater than num1, compare it with num3

    printf("The maximum of the three numbers is: %d\n", max);












    // 3. Finding the minimum using nested ternary
    // ✅ Works similarly to find the smallest value among three numbers.
    min = (num1 < num2) ? 
              ((num1 < num3) ? num1 : num3) 
            : ((num2 < num3) ? num2 : num3);

    printf("The minimum of the three numbers is: %d\n", min);















    // 4. Absolute value using ternary operator
    // ✅ The absolute value of a number is always positive.
    // ✅ If the number is negative, make it positive by multiplying it with -1.
    printf("Enter a number to find absolute value: ");
    scanf("%d", &num1);

    absValue = (num1 < 0) ? -num1 : num1;  
    printf("Absolute value: %d\n", absValue);







    // 5. Multiple conditions using ternary (Checking even or odd and positive or negative)
    printf("Enter a number to check even/odd and positive/negative: ");
    scanf("%d", &num1);

    // ✅ Combining ternary conditions for multiple checks
    (num1 == 0) ? printf("The number is zero.\n") : 
    (num1 > 0)  ? ((num1 % 2 == 0) ? printf("The number is positive and even.\n") : printf("The number is positive and odd.\n"))
                : ((num1 % 2 == 0) ? printf("The number is negative and even.\n") : printf("The number is negative and odd.\n"));








    // 6. Checking divisibility using ternary
    printf("Enter a number to check divisibility by 5 and 3: ");
    scanf("%d", &num1);

    // ✅ Using logical AND (&&) in ternary conditions
    (num1 % 5 == 0 && num1 % 3 == 0) ? printf("The number is divisible by both 5 and 3.\n") : 
    (num1 % 5 == 0) ? printf("The number is divisible by 5 only.\n") :
    (num1 % 3 == 0) ? printf("The number is divisible by 3 only.\n") : 
    printf("The number is not divisible by 5 or 3.\n");

    return 0;
}
