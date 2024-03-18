#include <stdio.h>
#include <stdlib.h>

/* Create a program to receive numbers from the user and exit when sum exceeds 100.*/

int main()
{
    int number, sum = 0;

    while (sum < 100) {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    }

    printf("The total sum = %d\n", sum);
    return 0;
}
