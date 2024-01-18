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
    Emp() {
        id = 0;
        strcpy(name, "no name");
        age = 18;
    }

    Emp(int _id, char* _name) {
        id = _id;
        strcpy(name, _name);
        age = 18;
    }

    Emp(int _id, char* _name, int _age) {
        id = _id;
        strcpy(name, _name);
        age = _age;
    }
    void setID(int _id) {
        id = _id;
    }

    int getID() {
        return id;
    }

    void setName(char* _name) {
        strcpy(name, _name);
    }

    char* getName() {
        return name;
    }

    void setAge(int _age) {
        age = _age;
    }

    int getAge() {
        return age;
    }

    void print() {
        cout << "ID: " << id << endl << "Name: " << name << endl << "Age: " << age << endl;
    }
};

void printEmpData(Emp e);

int main()
{
    Emp e1;
    Emp e2(2, "Ahmed");
    Emp e3(3, "Aly", 30);
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

    printEmpData(e1);
    printEmpData(e2);
    printEmpData(e3);

    return 0;
}

void printEmpData(Emp e) {
    cout << "Employee Data:" << endl;
    e.print();
}

