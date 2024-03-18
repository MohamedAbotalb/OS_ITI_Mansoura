#include <stdio.h>
#include <stdlib.h>

struct Calculation {
    int firstNumber;
    int secondNumber;
    char op;
};


int calc(struct Calculation c);

int main()
{
    struct Calculation cal;
    int result;

    printf("Please enter the operator: ");
    scanf("%c", &cal.op);

    printf("\nPlease enter the value of first number: ");
    scanf("%d", &cal.firstNumber);

    printf("\nPlease enter the value of second number: ");
    scanf("%d", &cal.secondNumber);

    result = calc(cal);

    printf("\nThe result = %d", result);

    return 0;
}

int calc(struct Calculation c) {
    switch(c.op) {
        case '+':
            return c.firstNumber + c.secondNumber;

        case '-':
            return c.firstNumber - c.secondNumber;

        case '*':
            return c.firstNumber * c.secondNumber;
    }
}
