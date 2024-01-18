#include <iostream>
#include <string.h>

using namespace std;

/* Create a struct of Employee with data (id, name, age) and functions (setters, getters, print) */

struct Emp {
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

    cout << "Employee Data:" << endl;
    e1.print();

    return 0;
}
