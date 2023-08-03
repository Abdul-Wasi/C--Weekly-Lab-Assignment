#include <stdio.h>

int main() {
    int preference;

    printf("Welcome to the Menu Planner!\n");
    printf("Please choose your preference:\n");
    printf("1. Vegetarian\n");
    printf("2. Non-vegetarian\n");
    printf("Enter your preference (1 or 2): ");
    scanf("%d", &preference);

    switch (preference) {
        case 1:
            printf("Your daily meal plan (Vegetarian):\n");
            printf("Breakfast: Oats with fruits\n");
            printf("Lunch: Vegetable sandwich with a salad\n");
            printf("Dinner: Mix-vegetable with brown rice\n");
            break;

        case 2:
            printf("Your daily meal plan (Non-vegetarian):\n");
            printf("Breakfast: Omellete with toast\n");
            printf("Lunch: Grilled chicken with vegetables\n");
            printf("Dinner: Baked fish with a salad\n");
            break;

        default:
            printf("Invalid preference. Please enter 1 for Vegetarian or 2 for Non-vegetarian.\n");
            break;
    }

    return 0;
}
