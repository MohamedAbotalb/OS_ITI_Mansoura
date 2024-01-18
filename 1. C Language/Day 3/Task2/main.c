#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 4

/* Create a two dimensional array of integers, initialize with zero, scan data, print, get the sum and average */


int main()
{
    // Create a two dimensional array
    int array[rows][cols] = {{0}};
    int i, j, sum = 0, average = 0;

    printf("Array elements for testing\n");
    for (i = 0; i < rows; i++) {
        printf("\nElements of Row no %d:\n", i + 1);
        for (j = 0; j < cols; j++) {
            printf("%d\t", array[i][j]);
        }
    }
    printf("\n");

    // Get the array values from the user
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Please the array value at index %d-%d: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");

    printf("Array elements from the user:");
    for (i = 0; i < rows; i++) {
        printf("\nElements of Row no %d:\n", i + 1);
        for (j = 0; j < cols; j++) {
            printf("%d\t", array[i][j]);
        }
    }
    printf("\n");

    // Get the sum of the array elements in each row
    for (i = 0; i < rows; i++) {
        sum = 0;
        for (j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        printf("Sum of Row no %d = %d\n", i + 1, sum);
    }
    printf("\n");

    // Get the average of the array elements in each column
    for (i = 0; i < cols; i++) {
        sum = 0;
        for (j = 0; j < rows; j++) {
            sum += array[j][i];
        }
        average = sum / rows;
        printf("Average of Column no %d = %d\n", i + 1, average);
    }

    return 0;
}
