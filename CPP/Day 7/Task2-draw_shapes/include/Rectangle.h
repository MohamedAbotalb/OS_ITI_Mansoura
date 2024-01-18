
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h";
#include "Shape.h"

class Rectangl: public Shape
{
    public:
        Rectangl();
        Rectangl(Point p1, Point p2);
        Rectangl(int _x1, int _y1, int _x2, int _y2);

        void setUpperLeft(int _x, int _y);
        void setUpperLeft(Point p);
        Point getUpperLeft();

        void setLowerRight(int _x, int _y);
        void setLowerRight(Point p);
        Point getLowerRight();

        void draw();
        void print();

    protected:

    private:
        Point upperLeft;
        Point lowerRight;
};

#endif // RECTANGLE_H
