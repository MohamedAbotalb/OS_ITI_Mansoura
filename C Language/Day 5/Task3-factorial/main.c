#include <stdio.h>
#include <stdlib.h>

/* Create a program to get the factorial value of a number */

int factorial(int number);

int main()
{
    int factNumber;

    printf("Please enter a number to get its factorial value: ");
    scanf("%d", &factNumber);

    printf("Factorial value of %d = %d", factNumber, factorial(factNumber));
    return 0;
}

int factorial(int number) {
    int fact = 1;

    for (int i = 1; i <= number; i++) {
        fact *= i;
    }

    return fact;
}
