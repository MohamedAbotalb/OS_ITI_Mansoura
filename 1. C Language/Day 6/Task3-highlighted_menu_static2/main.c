#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define null -32
#define size 5

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

void textattr(int i)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

struct Emp {
    int id;
    char name[10];
    int age;
    int salary;
    int overtime;
    int deduction;
};

// global variables
int idArray[size] = {0};
int indexArray[size] = {0};
struct Emp emps[size];

void createHighlightedMenu(int selectedItemColor, int fontColor);
int checkID(int id);
int checkValidID(int id);
int checkValidIndex(int index);
int checkIndex(int index);
int checkValidAge(int age);
int checkValidSalary(int salary);
int checkValidOvertime(int overtime);
int checkValidDeduction(int deduction);
void getEmployeeID(int id, int index);
void getEmployeeData(int index);
void createNewEmployee();
void showEmployeeInfo(int i);
void displayEmployee();
void displayAllEmployees();
void deleteByID(int id);
void deleteByName(char name[]);

int main()
{
    createHighlightedMenu(0x07, 0x02);

    return 0;
}


void createHighlightedMenu(int selectedItemColor, int fontColor) {
    int cursor = 0, i = 0, flag = 0, id;
    char ch, name[10];

    char words[6][20]= {"New", "Display Employee", "Display All", "Delete by ID", "Delete by Name", "Exit"};

    // make all employees id equal to -1 to indicate there is no value
    for (i = 0; i < size; i++) {
        emps[i].id = -1;
    }

    do{
        system("cls");
        for (i = 0; i < 6; i++) {
            if (i == cursor) textattr(selectedItemColor);

            gotoxy(20, 10+i);
            printf("%s", words[i]);
            textattr(fontColor);
        }

        ch = getch();

        switch (ch) {
            case -32:
                ch = getch();
                switch (ch) {
                    case 72:
                        cursor--;
                        if (cursor < 0)
                            cursor = 5;
                        break;
                    case 80:
                        cursor++;
                        if (cursor > 5)
                            cursor = 0;
                        break;
                    case 79:
                        cursor = 5;
                        break;}
                break;

            case 13:
                system("cls");
                //printf("%s", words[cursor]);

                // create new employee
                if (cursor == 0)
                    createNewEmployee();

                // display employee by its id
                else if (cursor == 1)
                    displayEmployee();

                // display all employees
                else if (cursor == 2)
                    displayAllEmployees();

                // delete employee by id
                else if (cursor == 3) {
                    printf("Please enter the id value to delete the employee: ");
                    scanf("%d", &id);

                    while(checkValidID(id) == 1) {
                        printf("Please enter a valid id value: ");
                        scanf("%d", &id);
                    }
                    deleteByID(id);
                }

                // delete employee by name
                else if (cursor == 4) {
                    printf("Please enter the name value to delete the employee: ");
                    scanf("%s", name);

                    deleteByName(name);
                }

                if (cursor == 5)
                        flag = 1;
                getch();
                break;

            case 27:
                flag = 1;
                break;
        }

    } while(flag == 0);
}

// Check if the id is duplicated or not
int checkID(int id) {
    int i, flag = 0; // 0 not found, 1 found

    for (i = 0; i < size; i++) {
        if (id == idArray[i]) flag = 1;
    }

    return flag;
}

// check id value to be greater than 0
int checkValidID(int id) {
    if (id <= 0)
        return 1;
    else
        return 0;
}

// check if index is less than 0 or greater than the size of emps array
int checkValidIndex(int index) {
    if (index <= 0 || index > size)
        return 1;
    else
        return 0;
}

// check if the index is present or not
int checkIndex(int index) {
    int flag = 1; // 1 is not found, 0 is found

    if (index == indexArray[index] && emps[index].id > 0) flag = 0;

    return flag;
}

int checkValidAge(int age) {
    if (age < 18 || age >= 65) {
        return 1;
    } else
        return 0;
}

int checkValidSalary(int salary) {
    if (salary <= 3500)
        return 1;
    else
        return 0;
}

int checkValidOvertime(int overtime) {
    if (overtime <= 500)
        return 1;
    else
        return 0;
}

int checkValidDeduction(int deduction) {
    if (deduction <= 500)
        return 1;
    else
        return 0;
}

// Get employee id from the user and check its value
void getEmployeeID(int id, int index) {
    printf("Please enter the id: ");
    scanf("%d", &id);

    while(checkValidID(id) == 1) {
        printf("Please enter a valid id value: ");
        scanf("%d", &id);
    }

    while(checkID(id) == 1) {
        printf("Duplicate id please enter a unique id value: ");
        scanf("%d", &id);
    }

    emps[index].id = id;
    idArray[index] = id;
}

// Get employee data from the user
void getEmployeeData(int index) {
    int age, salary, overtime, deduction;

    printf("Please enter the employee name: ");
    scanf("%s", emps[index].name);

    printf("Please enter the employee age: ");
    scanf("%d", &age);

    while(checkValidAge(age)) {
        printf("Please enter a valid age value from 18 to 64: ");
        scanf("%d", &age);
    }
    emps[index].age = age;

    printf("Please enter the employee salary: ");
    scanf("%d", &salary);

    while(checkValidSalary(salary)) {
        printf("Please enter a valid salary value greater than 3500: ");
        scanf("%d", &salary);
    }
    emps[index].salary = salary;

    printf("Please enter the employee overtime: ");
    scanf("%d", &overtime);

    while(checkValidOvertime(overtime)) {
        printf("Please enter a valid overtime value greater than 500: ");
        scanf("%d", &overtime);
    }
    emps[index].overtime = overtime;

    printf("Please enter the employee deduction: ");
    scanf("%d", &deduction);

    while(checkValidDeduction(deduction)) {
        printf("Please enter a valid deduction value greater than 500: ");
        scanf("%d", &deduction);
    }
    emps[index].deduction = deduction;
}

void createNewEmployee() {
    int index, id;
    char ch;

    printf("please enter no of employee to create from 1 to %d: ", size);
    scanf("%d", &index);

    while(checkValidIndex(index)) {
        printf("Pleas enter a valid no of employee value: ");
        scanf("%d", &index);
    }
    index--;

    // check if there is data for an employee at the given index
    if (checkIndex(index)) {
        getEmployeeID(id, index);
        getEmployeeData(index);
    }
    else {
        printf("There is present employee data before so do you want to overwrite the data y or n ?");
        ch = getch();
        printf("\n");

        if (ch == 'y') {
            idArray[index] = -1; // to change id value at this index before check for duplicate value
            getEmployeeID(id, index);
            getEmployeeData(index);
        }
        else if (ch == 'n') {
            printf("ok, thanks");
        }
    }
    indexArray[index] = index;
}

void showEmployeeInfo(int i) {
    int empSalary = emps[i].salary + emps[i].overtime - emps[i].deduction;

    printf("\nEmployee name: %s", emps[i].name);

    printf("\nEmployee age: %d", emps[i].age);

    printf("\nEmployee salary: %d", empSalary);
}

void displayEmployee() {
    int i, id;

    printf("Please enter id of employee to display: ");
    scanf("%d", &id);

    while(checkValidID(id) == 1) {
        printf("Please enter a valid id value: ");
        scanf("%d", &id);
    }

    // check if the id is present in emps array or not
    for (i = 0; i < size; i++) {
        if (id == emps[i].id) break;
    }

    if (i == size) {
        printf("Id is not found");
    } else {
        showEmployeeInfo(i);
    }
}

void displayAllEmployees() {
    int i;

    printf("All Employees:\n\n");

    for (i = 0; i < size; i++) {
        if (emps[i].id != -1) {
            printf("Info of Employee no %d:", i + 1);
            showEmployeeInfo(i);
            printf("\n------------------------\n");
        }
    }
}

void deleteByID(int id) {
    int i, flag = 0;

    for (i = 0; i < size; i++) {
        if (id == emps[i].id) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        indexArray[i] = -1;
        emps[i].id = -1;
        idArray[i] = -1;
        printf("Employee is deleted");
    }
    else
        printf("Not found id");
}

void deleteByName(char name[]) {
    int i, flag = 0;

    for (i = 0; i < size; i++) {
        if (strcmp(name, emps[i].name) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        indexArray[i] = -1;
        emps[i].id = -1;
        printf("Employee is deleted");
    }
    else
        printf("Name is not found");
}
