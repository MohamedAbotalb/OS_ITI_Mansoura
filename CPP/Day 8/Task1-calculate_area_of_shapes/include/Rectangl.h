#ifndef RECTANGL_H
#define RECTANGL_H

#include <Shape.h>


class Rectangl : public Shape
{
    public:
        Rectangl(int _firstDim = 1, int _secondDim = 1);

        void print();
        float calculateArea();
        ~Rectangl();

    protected:

    private:
};

#endif // RECTANGL_H
