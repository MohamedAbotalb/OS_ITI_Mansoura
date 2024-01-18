#include "Point.h";
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    public:
        Circle();
        Circle(Point p1, int _radius);
        Circle(int _x, int _y, int _radius);

        void setCenter(int _x, int _y);
        void setCenter(Point p);
        Point getCenter();

        void setRadius(int _radius);
        int getRadius();

        void draw();
        void print();

    protected:

    private:
        Point center;
        int radius;
};

#endif // CIRCLE_H
