#ifndef PARENT_H
#define PARENT_H


class Parent
{
    public:
        Parent(int _first = 0, int _second = 0);

        void setFirst(int _first);
        int getFirst();

        void setSecond(int _second);
        int getSecond();

        void setParent(int _first, int _second);

        virtual void print();

        virtual int add();

        virtual int multiple();

    protected:
        int first, second;

    private:

};

#endif // PARENT_H
