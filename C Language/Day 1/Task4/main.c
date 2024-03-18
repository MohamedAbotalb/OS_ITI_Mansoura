#include <stdio.h>
#include <stdlib.h>

/* Create a program to take an integer (decimal) and display its hexadecimal equivalent */

int main()
{
    int decimalNumber;

    printf("Enter the Decimal Number: ");
    scanf("%d", &decimalNumber);

    printf("Hexadecimal Number equivalent to %d is %x\n", decimalNumber, decimalNumber);

    return 0;
}
