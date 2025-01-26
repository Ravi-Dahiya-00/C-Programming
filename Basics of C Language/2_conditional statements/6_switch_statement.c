#include <stdio.h>

int main()
{
    // switch statement :
                        // it is known as multiple way decision statement in c.

    
    // switch(expression)
    // {
    //     case value1 : 
    //             Block of statement1 ;
    //             break;
    //     case value_n : 
    //             Block of statement_n ;
    //             break;
        
    //     default : 
    //     default statement;
    // }               









 int choice;

    // Displaying a menu for the user to make a selection
    printf("Menu:\n");
    printf("1. Display Day Name\n");
    printf("2. Perform Arithmetic Operations\n");
    printf("3. Check Default Case\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // The 'switch' statement evaluates the given expression (choice) and executes the matching case block
    switch (choice) {

        // 'case' specifies a possible value for the expression (choice)
        case 1: { 
            // Nested switch to display the name of the day
            int day;
            printf("Enter a number (1-7) to get the day of the week: ");
            scanf("%d", &day);

            switch (day) {
                case 1: // If day == 1, execute this block
                    printf("Monday\n");
                    break; // Exits the switch block
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
                default: 
                    // Executes if no 'case' matches the value of 'day'
                    printf("Invalid day! Please enter a number between 1 and 7.\n");
            }
            break; // Exits the outer switch after finishing this case
        }

        case 2: {
            int num1, num2, operation;

            // Menu for arithmetic operations
            printf("Arithmetic Operations Menu:\n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Enter the operation you want to perform (1-4): ");
            scanf("%d", &operation);

            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);l

            // Switch to handle arithmetic operations
            switch (operation) {
                case 1: // Addition
                    printf("Result: %d\n", num1 + num2);
                    break;
                case 2: // Subtraction
                    printf("Result: %d\n", num1 - num2);
                    break;
                case 3: // Multiplication
                    printf("Result: %d\n", num1 * num2);
                    break;
                case 4: // Division
                    if (num2 != 0) {
                        printf("Result: %.2f\n", (float)num1 / num2);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
                default: 
                    // Executes if no valid operation is selected
                    printf("Invalid operation selected.\n");
            }
            break; // Exits the outer switch after handling operations
        }

        case 3:
            // Demonstrating a simple 'default' case
            printf("This is the default case demonstration.\n");
            break;

        default:
            // Executes if no 'case' matches the expression (choice)
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0; // Exits the program
}