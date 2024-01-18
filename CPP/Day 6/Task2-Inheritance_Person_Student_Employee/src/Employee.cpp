#include <iostream>
#include "Employee.h"

using namespace std;

//Employee::Employee(int _id, char* _name): Person(_id, _name) {};

//Employee::Employee(int _id, char* _name, int _age): Person(_id, _name, _age) {};

Employee::Employee(int _id, char* _name, int _age, int _salary): Person(_id, _name, _age) { salary = _salary; }

void Employee::setSalary(int _salary) { salary = _salary; }

int Employee::getSalary() { return salary; }

void Employee::print() {
    cout << "Employee Data:" << endl;
    cout << "id = " << id << ", Name = " << name << ", Age = " << age << " and Salary = " << salary << endl;
}
