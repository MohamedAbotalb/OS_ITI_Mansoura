#include "Point.h";
#ifndef RECT_H
#define RECT_H


class Rect
{
    public:
        Rect();
        Rect(Point p1, Point p2);
        Rect(int _x1, int _y1, int _x2, int _y2);

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

#endif // RECT_H
