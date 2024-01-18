#include <iostream>
#include "Person.h"
#include <string.h>

using namespace std;

Person::Person()
{
    id = -1;
    strcpy(name, "undefined");
    age = 0;
}

Person::Person(int _id, char* _name)
{
    id = _id;
    strcpy(name, _name);
}

Person::Person(int _id, char* _name, int _age) {
    id = _id;
    strcpy(name, _name);
    age = _age;
}

void Person::setID(int _id) { id = _id; }

int Person::getID() { return id; }

void Person::setName(char* _name) { strcpy(name, _name); }

char* Person::getName() { return name; }

void Person::setAge(int _age) { age = _age; }

int Person::getAge() { return age; }

void Person::print() {
    cout << "id = " << id << ", Name = " << name << ", Age = " << age << endl;
}
