#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <Person.h>


class Employee : public Person
{
    public:
        //Employee(int _id, char* _name);
        //Employee(int _id, char* _name, int _age);
        Employee(int _id, char* _name, int _age = 0, int salary = 0);

        void setSalary(int _salary);
        int getSalary();

        void print();

    protected:

    private:
        int salary;
};

#endif // EMPLOYEE_H
