#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Shape.h>


class Triangle : public Shape
{
    public:
        Triangle(int _firstDim = 1, int _secondDim = 1);

        void print();
        float calculateArea();
        ~Triangle();

    protected:

    private:
};

#endif // TRIANGLE_H
