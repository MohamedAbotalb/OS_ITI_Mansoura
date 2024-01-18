#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape.h>


class Circle : public Shape
{
    public:
        Circle(int _radius = 1);

        void setFirstDimension(int _firstDim);
        void setSecondDimension(int _secondDim);

        void print();
        float calculateArea();

        ~Circle();

    protected:

    private:
        const float PI = 3.14;
};

#endif // CIRCLE_H
