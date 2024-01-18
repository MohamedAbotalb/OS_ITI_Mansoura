#include <stdio.h>
#include <stdlib.h>

/* Create a program to take an ASCII code from the user, and then display its character */

int main()
{
    int number;

    printf("Enter the Number: ");
    scanf("%d", &number);

    printf("ASCII code of %d is %c\n", number, number);

    return 0;
}
