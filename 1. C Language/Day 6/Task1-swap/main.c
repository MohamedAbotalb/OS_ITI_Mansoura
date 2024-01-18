#include <stdio.h>
#include <stdlib.h>

/* Create a program to swap the values of two variables between each other */

void swap(int *first, int *second);

int main()
{
    int a = 10, b = 20;

    printf("Values of a and b before swapping = %d : %d", a, b);

    swap(&a, &b);

    printf("\nValues of a and b after swapping = %d : %d", a, b);

    return 0;
}

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}
