#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape(int _firstDim = 1, int _secondDim = 1);

        virtual void setFirstDimension(int _firstDim);
        int getFirstDimension();

        virtual void setSecondDimension(int _secondDim);
        int getSecondDimension();

        virtual void print() = 0;
        virtual float calculateArea() = 0;
        ~Shape();

    protected:
        int firstDimension, secondDimension;

    private:
};

#endif // SHAPE_H
