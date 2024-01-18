#include <stdio.h>
#include <stdlib.h>

/* Create a program to get the power of a number */

int power(int base, int x);

int main()
{
    int base, exponent;

    printf("Please enter the base number: ");
    scanf("%d", &base);

    printf("Please enter the exponent number: ");
    scanf("%d", &exponent);

    printf("Power of %d = %d", base, power(base, exponent));

    return 0;
}

int power(int base, int x) {
    int powerResult = 1;

    for (int i = 1; i <= x; i++) {
        powerResult *= base;
    }

    return powerResult;
}
