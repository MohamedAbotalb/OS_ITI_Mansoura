#include <iostream>
#include "Student.h"

using namespace std;

//Student::Student(int _id, char* _name): Person(_id, _name) {};

//Student::Student(int _id, char* _name, int _age): Person(_id, _name, _age);

Student::Student(int _id, char* _name, int _age, char _grade): Person(_id, _name, _age) { grade = _grade; };

void Student::setGrade(char _grade) { grade = _grade; }

char Student::getGrade() { return grade; }

void Student::print() {
    cout << "Student Data:" << endl;
    cout << "id = " << id << ", Name = " << name << ", Age = " << age << " and Grade = " << grade << endl;
}
