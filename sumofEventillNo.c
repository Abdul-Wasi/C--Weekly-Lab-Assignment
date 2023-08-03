#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 2; i <= number; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d is: %d\n", number, sum);

    return 0;
}
