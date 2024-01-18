#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"

using namespace std;

int main()
{
    Person p1(5, "Mohamed", 25);
    p1.print();

    cout << endl;

    Student s1(10, "Ahmed", 18, 'A');
    s1.print();

    cout << endl;

    Employee e1(2, "Mahmoud", 30, 12000);
    e1.print();

    return 0;
};
