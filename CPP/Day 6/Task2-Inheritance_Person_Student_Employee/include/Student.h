#ifndef STUDENT_H
#define STUDENT_H

#include <Person.h>


class Student : public Person
{
    public:
        //Student(int _id, char* _name);
        //Student(int _id, char* _name, int _age);
        Student(int _id, char* _name, int _age = 0, char _grade = 'F');

        void setGrade(char _grade);
        char getGrade();

        void print();

    protected:

    private:
        char grade;
};

#endif // STUDENT_H
