#include <stdio.h>
#include <stdlib.h>

/* Create a program to print the grade of student */

int main()
{
    int studentDegree;

    printf("Enter The Student Degree: ");
    scanf("%d", &studentDegree);

    if (studentDegree > 100 || studentDegree < 0) {
        printf("Please enter a valid degree between 0 to 100\n");
    }
    else if (studentDegree >= 90 && studentDegree <= 100) {
        printf("Excellent\n");
    }
    else if (studentDegree >= 80) {
        printf("verygood\n");
    }
    else if (studentDegree >= 70) {
        printf("good\n");
    }
    else if (studentDegree >= 60) {
        printf("Acceptable\n");
    }
    else if (studentDegree >= 0) {
        printf("Fail\n");
    }

    return 0;
}
