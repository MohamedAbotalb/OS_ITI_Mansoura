#ifndef FIRSTCHILD_H
#define FIRSTCHILD_H

#include <Parent.h>


class FirstChild : public Parent
{
    public:
        FirstChild(int _first = 0, int _second = 0, int _third = 0);

        void setThird(int _third);
        int getThird();

        void setFirstChild(int _first, int _second, int _third);

        void print();
        int add();
        int multiple();

    protected:

    private:
        int third;
};

#endif // FIRSTCHILD_H
