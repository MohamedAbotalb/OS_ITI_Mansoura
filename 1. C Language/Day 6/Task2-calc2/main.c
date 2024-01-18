#include <stdio.h>
#include <stdlib.h>

struct Calculation {
    int firstNumber;
    int secondNumber;
    int sum;
    int sub;
    int mul;
};

struct Calculation Calc(struct Calculation c);

int main()
{
    struct Calculation cal;
    struct Calculation result;

    printf("Please enter the value of first number: ");
    scanf("%d", &cal.firstNumber);

    printf("\nPlease enter the value of second number: ");
    scanf("%d", &cal.secondNumber);

    result = Calc(cal);

    printf("\nThe Sum = %d", result.sum);

    printf("\nThe Sub = %d", result.sub);

    printf("\nThe Mul = %d", result.mul);
    return 0;
}

struct Calculation Calc(struct Calculation c) {

    c.sum = c.firstNumber + c.secondNumber;

    c.sub = c.firstNumber - c.secondNumber;

    c.mul = c.firstNumber * c.secondNumber;

    return c;
}
