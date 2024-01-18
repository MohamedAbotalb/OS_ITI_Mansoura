#ifndef SQUARE_H
#define SQUARE_H

#include <Shape.h>


class Square : public Shape
{
    public:
        Square(int _firstDim);

        void setFirstDimension(int _firstDim);
        void setSecondDimension(int _secondDim);

        void print();
        float calculateArea();

        ~Square();

    protected:

    private:
};

#endif // SQUARE_H
