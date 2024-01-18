#include <stdio.h>
#include <stdlib.h>

/* Create a program to create a one dimensional array dynamically in the heap */

void getValues(int size, int *arr);
void printValues(int size, int *arr);

int main()
{
    int size;
    printf("Please enter the size of array: ");
    scanf("%d", &size);

    int *arr = (int *) malloc(size * sizeof(int));

    if (arr != NULL) {
        // Get the values of array items from the user
        getValues(size, arr);

        // print the values of array items on the screen
        printValues(size, arr);
    } else {
        printf("the heap is full");
    }

    free(arr);
    return 0;
}

void getValues(int size, int *arr) {
    int i;
    for (i = 0; i < size; i++) {
        printf("Please enter the value of no %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void printValues(int size, int *arr) {
    int i;
    for (i = 0; i < size; i++) {
        printf("\nValue at index %d = %d", i, *(arr + i));
    }
}
