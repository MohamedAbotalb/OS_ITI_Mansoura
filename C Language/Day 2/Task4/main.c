#include <stdio.h>
#include <stdlib.h>

/* Create a program to print the number is prime or not */

int main()
{
    int number, i, flag = 0; // 0 for prime, 1 for not prime

    printf("Enter a number: ");
    scanf("%d", &number);

    // check if the number is 0 or 1 make the flag = 1
    if (number == 0 || number == 1) {
        flag = 1;
    } else {
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
        printf("%d is not a prime number\n", number);
    else
        printf("%d is a prime number\n", number);

    return 0;
}
