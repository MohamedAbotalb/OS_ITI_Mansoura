#include <stdio.h>
#include <stdlib.h>

/* Create a program to display some information about an employee: id, name, age, salary */

struct Emp {
    int id;
    char name[10];
    int age;
    int salary;
    int overtime;
    int deduction;
};

int main()
{
    struct Emp e1;

    // Get the employee info from the user
    printf("Please enter the employee id: ");
    scanf("%d", &e1.id);

    printf("Please enter the employee name: ");
    scanf("%s", e1.name);

    printf("Please enter the employee age: ");
    scanf("%d", &e1.age);

    printf("Please enter the employee salary: ");
    scanf("%d", &e1.salary);

    printf("Please enter the employee overtime: ");
    scanf("%d", &e1.overtime);

    printf("Please enter the employee deduction: ");
    scanf("%d", &e1.deduction);

    // print the employee info
    printf("Employee date:\n");
    printf("id: %d\n", e1.id);
    printf("name: %s\n", e1.name);
    printf("salary: %d\n", e1.salary + e1.overtime - e1.deduction);

    return 0;
}
