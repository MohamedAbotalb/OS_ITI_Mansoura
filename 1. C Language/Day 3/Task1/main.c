#include <stdio.h>
#include <stdlib.h>
#define size 5

/* Create a one dimensional array of integers, initialize with zero, scan data, print, get sum - max - min, search for a target */

int main()
{
    int i, sum = 0, max, min, target, targetIndex = -1;
    // create one dimensional array
    int array[size] = {0};

    // print array elements
    printf("Array elements for testing\n");
    for(i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }

    printf("\n");

    // Get the array elements values from the user
    for (i = 0; i < size; i++) {
        printf("Please enter the number %d value: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n");

    // print array elements
    printf("Array elements from the user:\n");
    for(i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }

    printf("\n");

    // Get the sum of all array elements
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    printf("Sum of all array elements = %d\n", sum);

    // Get the maximum value in the array
    max = array[0];
    for (i = 0; i < size; i++) {
        if (max < array[i])
            max = array[i];
    }
    printf("Maximum value in the array = %d\n", max);

    // Get the minimum value in the array
    min = array[0];
    for (i = 0; i < size; i++) {
        if (min > array[i])
            min = array[i];
    }
    printf("Minimum value in the array = %d\n", min);

    // Search for a value from the user
    printf("Please enter the target value: ");
    scanf("%d", &target);
    for (i = 0; i < size; i++) {
        if (target == array[i])
            targetIndex = i;
    }
    if (targetIndex == -1)
        printf("%d is not present in the array\n", target);
    else
        printf("%d is present at index %d\n", target, targetIndex);

    return 0;
}
