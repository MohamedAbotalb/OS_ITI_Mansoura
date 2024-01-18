#ifndef SECONDCHILD_H
#define SECONDCHILD_H

#include <Parent.h>


class SecondChild : public Parent
{
    public:
        SecondChild(int _first = 0, int _second = 0, int _third = 0, int _fourth = 0);

        void setThird(int _third);
        int getThird();

        void setFourth(int _fourth);
        int getFourth();

        void setSecondChild(int _first, int _second, int _third, int _fourth);

        void print();
        int add();
        int multiple();

    protected:

    private:
        int third, fourth;
};

#endif // SECONDCHILD_H
