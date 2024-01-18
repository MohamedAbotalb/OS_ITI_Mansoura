#include <stdio.h>
#include <stdlib.h>

struct Emp {
    int id;
    char name[10];
    int age;
};

void getEmployeeData(struct Emp *e);
void printEmployeeData(struct Emp *e);

int main()
{
    struct Emp *e1 = (struct Emp *) malloc(sizeof(struct Emp));

    if (e1 != NULL) {
        getEmployeeData(e1);

        printEmployeeData(e1);

        free(e1);
    } else
        printf("The heap is full");

    return 0;
}

void getEmployeeData(struct Emp *e) {
    printf("Enter the id of employee: ");
    scanf("%d", &(e->id));

    printf("\nEnter the name of employee: ");
    scanf("%s", e->name);

    printf("\nEnter the age of employee: ");
    scanf("%d", &(e->age));
}

void printEmployeeData(struct Emp *e) {
    printf("\nthe id of employee is: %d", e->id);

    printf("\nthe name of employee is: %s", e->name);

    printf("\nthe age of employee is: %d", e->age);
}
