#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Point p1(1, 8), p2(5, 2), p3(1, 1);

    Rectangle r1(p1, p2);
    r1.print();

    Circle c1(p1, 7);
    c1.print();

    Triangle t1(p1, p2, p3);
    t1.print();

    return 0;
}
