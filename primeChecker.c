#include <stdio.h>

int main() {
    int number, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    }
    else if (number == 2 || number == 3) {
        isPrime = 1;
    }
    else if (number % 2 == 0 || number % 3 == 0) {
        isPrime = 0;
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    }
    else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
