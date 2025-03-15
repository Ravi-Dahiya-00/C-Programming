#include <stdio.h>
#include <string.h>
#include <ctype.h>




// Function to convert a string to lowercase for case-insensitive comparison
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// 1️⃣ void toLowerCase(char str[]) — Converts a String to Lowercase
// Purpose: Makes the string case-insensitive.
// Why Used?: Ensures that "CHICKEN BREAST", "Chicken Breast", and "chicken breast" are treated the same.
// How It Works?
// Loops through each character.
// Converts uppercase letters to lowercase using tolower().





// Function to remove the newline character from a string
void removeNewline(char str[]) {
    str[strcspn(str, "\n")] = 0;
}




// Structure to store food name and its protein content
struct FoodData {
    char name[20];  // Food name
    int protein;    // Protein content per 100g
};

// Function to compare two strings case-insensitively
int caseInsensitiveCompare(const char str1[], const char str2[]) {
    char temp1[50], temp2[50];
    strcpy(temp1, str1);
    strcpy(temp2, str2);
    toLowerCase(temp1);
    toLowerCase(temp2);
    return strcmp(temp1, temp2);
}

// Function to check if input food is in the predefined list
void checkFoodProtein(char food[]) {
    struct FoodData foods[] = {
        {"chicken breast", 31},
        {"eggs", 13},
        {"tofu", 8},
        {"almonds", 21},
        {"greek yogurt", 10},
        {"peanut butter", 25}
    };

    int found = 0;

    for (int i = 0; i < sizeof(foods) / sizeof(foods[0]); i++) {
        if (caseInsensitiveCompare(food, foods[i].name) == 0) {
            printf("Protein: %dg per 100g\n", foods[i].protein);

            // Categorizing food based on protein content
            if (foods[i].protein > 20) {
                printf("Category: High Protein\n");
            } else if (foods[i].protein >= 10) {
                printf("Category: Moderate Protein\n");
            } else {
                printf("Category: Low Protein\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid food item\n");
    }
}

int main() {
    char food[50];

    printf("Enter a food item: ");
    fgets(food, sizeof(food), stdin);
    
    removeNewline(food); // Remove newline character

    checkFoodProtein(food); // Process input and check food

    return 0;
}
