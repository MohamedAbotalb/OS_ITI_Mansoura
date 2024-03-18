#include <stdio.h>
#include <stdlib.h>

int calc(int firstNumber, int secondNumber, char op);

int main()
{
    int firstNumber, secondNumber, result;
    char op;

    printf("Please enter the operator: ");
    scanf("%c", &op);

    printf("\nPlease enter the value of first number: ");
    scanf("%d", &firstNumber);

    printf("\nPlease enter the value of second number: ");
    scanf("%d", &secondNumber);

    result = calc(firstNumber, secondNumber, op);

    printf("\nThe result = %d", result);

    return 0;
}

int calc(int firstNumber, int secondNumber, char op) {
    switch(op) {
        case '+':
            return firstNumber + secondNumber;

        case '-':
            return firstNumber - secondNumber;

        case '*':
            return firstNumber * secondNumber;
    }
}
