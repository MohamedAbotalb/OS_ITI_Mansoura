#include <stdio.h>
#include <stdlib.h>

/* Create a program to create a two dimensional array dynamically in the heap */

void getDegrees(int rows, int cols, int **students);
void getTotalDegreesSum(int rows, int cols, int **students);
void freeStudents(int cols, int **students);

int main()
{
    int i, j, rows, cols;

    printf("Please enter the no of students to store: ");
    scanf("%d", &rows);

    printf("Please enter the no of degrees for subjects to store for each student: ");
    scanf("%d", &cols);

    int **students = (int **) malloc(rows * sizeof(int *));

    for (i = 0; i < rows; i++) {
        students[i] = (int *) malloc(cols * sizeof(int));
    }

    if (students != NULL) {
        // Get degrees values from the users
        getDegrees(rows, cols, students);

        // Get the sum of degrees for each student
        getTotalDegreesSum(rows, cols, students);

        // free the space for student array
        freeStudents(cols, students);
    } else
        printf("The heap is full");


    return 0;
}

void getDegrees(int rows, int cols, int **students) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Please enter the degree no %d for student no %d: ", j + 1, i + 1);
            scanf("%d", &students[i][j]);
        }
    }
}

void getTotalDegreesSum(int rows, int cols, int **students) {
    int i, j, sum;

    for (i = 0; i < rows; i++) {
        sum = 0;
        for (j = 0; j < cols; j++) {
            sum += students[i][j];
        }
        printf("\nTotal degrees of student no %d = %d", i + 1, sum);
    }
}

void freeStudents(int cols, int **students) {
    int i;
    for (i = 0; i < cols; i++) {
        free(students[i]);
    }
    free(students);
}
