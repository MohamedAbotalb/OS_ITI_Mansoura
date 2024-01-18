#include <stdio.h>
#include <stdlib.h>

/* Create a program to take two numbers and print the sum, subtraction, multiplication */

int main()
{
    int firstNumber, secondNumber;

    printf("Enter the First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter the Second Number: ");
    scanf("%d", &secondNumber);

    int sum = firstNumber + secondNumber;
    int subtration = firstNumber - secondNumber;
    int multiplication = firstNumber * secondNumber;

    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    printf("%d - %d = %d\n", firstNumber, secondNumber, subtration);
    printf("%d * %d = %d\n", firstNumber, secondNumber, multiplication);

    return 0;
}
