#include <stdio.h>
#include <stdlib.h>
#define count 3

/* Create a program to display some information about a group of employees: id, name, age, salary */

struct Emp {
    int id;
    char name[10];
    int age;
    int salary;
    int overtime;
    int deduction;
};

int checkID(int id, int idArray[], int size);

int main()
{
    struct Emp emps[count];
    int i, id, idArray[count] = {0};

    // Get the emplyees info from the user
    for (i = 0; i < count; i++) {
        printf("Please enter the data of employee no %d:\n", i + 1);

        printf("id: ");
        scanf("%d", &id);

        while (checkID(id, idArray, count) == 1) {
            printf("Duplicate id please enter a unique id value: ");
            scanf("%d", &id);
        }

        emps[i].id = id;

        idArray[i] = id;

    }

        printf("name: ");
        scanf("%s", emps[i].name);

        printf("age: ");
        scanf("%d", &emps[i].age);

        printf("salary: ");
        scanf("%d", &emps[i].salary);

        printf("overtime: ");
        scanf("%d", &emps[i].overtime);

        printf("deduction: ");
        scanf("%d", &emps[i].deduction);

        printf("\n");
    }

    // Print the information about each employee
    for (i = 0; i < count; i++) {
        printf("Data of Employee no %d:\n", i + 1);

        printf("id: %d\n", emps[i].id);
        printf("name: %s\n", emps[i].name);
        printf("salary: %d\n", emps[i].salary + emps[i].overtime - emps[i].deduction);

        printf("\n");
    }

    return 0;
}

int checkID(int id, int idArray[], int size) {
    int i, flag = 0; // 0 not found, 1 found

    for (i = 0; i < size; i++) {
        if (id == idArray[i]) flag = 1;
    }

    return flag;
}
