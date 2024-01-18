#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"
#include "Shape.h"

class Triangle: public Shape
{
    public:
        Triangle();
        Triangle(Point p1, Point p2, Point p3);
        Triangle(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3);

        void setUpper(int _x, int _y);
        void setUpper(Point p);
        Point getUpper();

        void setRight(int _x, int _y);
        void setRight(Point p);
        Point getRight();

        void setLeft(int _x, int _y);
        void setLeft(Point p);
        Point getLeft();

        void draw();
        void print();

    protected:

    private:
        Point upper;
        Point right;
        Point left;
};

#endif // TRIANGLE_H
