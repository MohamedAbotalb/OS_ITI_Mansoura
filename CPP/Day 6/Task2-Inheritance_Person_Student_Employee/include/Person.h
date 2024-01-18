#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        Person();
        Person(int _id, char* _name);
        Person(int _id, char* _name, int _age);

        void setID(int _id);
        int getID();

        void setName(char* _name);
        char* getName();

        void setAge(int _age);
        int getAge();

        void print();

    protected:
        int id;
        char name[15];
        int age;

    private:
};

#endif // PERSON_H
