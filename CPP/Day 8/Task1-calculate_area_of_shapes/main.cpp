#include <iostream>
#include "Shape.h"
#include "Rectangl.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

void printShapeArea(Shape*);

int main()
{
    Rectangl r1(2, 5);
    Shape* s = &r1;
    printShapeArea(s);

    Triangle t1(3, 6);
    s = &t1;
    printShapeArea(s);

    Circle c1(10);
    s = &c1;
    printShapeArea(s);

    Square s1(5);
    s = &s1;
    printShapeArea(s);
    return 0;
}

void printShapeArea(Shape* s) {
    s->print();
    cout << " Area = " << s->calculateArea() << endl;
}
