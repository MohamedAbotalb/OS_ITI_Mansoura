#include <iostream>
#include <string.h>

using namespace std;

/* Create a class of Employee with data (id, name, age) and functions (setters, getters, print) */

class Emp {
private:
    int id;
    char name[15];
    int age;

public:
    void setID(int id) {
        this->id = id;
    }

    int getID() {
        return id;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    char* getName() {
        return this->name;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() {
        return this->age;
    }

    void print() {
        cout << "ID: " << this->getID() << endl << "Name: " << this->getName() << endl << "Age: " << this->getAge() << endl;
    }

};

//void setEmpData(Emp e);
void printEmpData(Emp e);

int main()
{
    Emp e1;
    int id, age;
    char name[15];

    do {
        cout << "Please enter the employee id: ";
        cin >> id;
    } while (id <= 0);

    e1.setID(id);

    do {
        cout << "Please enter the employee name: ";
        cin >> name;
    } while (strlen(name) < 3 || strlen(name) > 15);

    e1.setName(name);

    do {
        cout << "Please enter the employee age: ";
        cin >> age;
    } while (age <= 18 || age >= 65);

    e1.setAge(age);

    //setEmpData(e1);

    printEmpData(e1);

    return 0;
}

/*
void setEmpData(Emp e) {
    int id, age;
    char name[15];

    do {
        cout << "Please enter the employee id: ";
        cin >> id;
    } while (id <= 0);

    e1.setID(id);

    do {
        cout << "Please enter the employee name: ";
        cin >> name;
    } while (strlen(name) < 3 || strlen(name) > 15);

    e1.setName(name);

    do {
        cout << "Please enter the employee age: ";
        cin >> age;
    } while (age <= 18 || age >= 65);

    e1.setAge(age);
}
*/

void printEmpData(Emp e) {
    cout << "Employee Data:" << endl;
    e.print();
}
