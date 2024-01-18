#include "Point.h";
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    public:
        Rectangle();
        Rectangle(Point p1, Point p2);
        Rectangle(int _x1, int _y1, int _x2, int _y2);

        void setUpperLeft(int _x, int _y);
        void setUpperLeft(Point p);
        Point getUpperLeft();

        void setLowerRight(int _x, int _y);
        void setLowerRight(Point p);
        Point getLowerRight();

        void print();

    protected:

    private:
        Point upperLeft;
        Point lowerRight;
};

#endif // RECTANGLE_H
