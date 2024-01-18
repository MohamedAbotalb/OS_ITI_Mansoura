#include <iostream>
#include <graphics.h>
#include "Shape.h"
#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

void drawShapes(Shape**, int);

int main()
{
    Rectangl r1(10, 20, 30, 40);
    Circle c1(30, 50, 20);
    Triangle t1(10, 20, 30, 40, 50, 60);

    Shape* shapes[3] = {&r1, &c1, &t1};

    drawShapes(shapes, 3);
    return 0;
}

void drawShapes(Shape** objects, int size) {
    for (int i = 0; i < size; i++) {
        objects[i]->draw();
    }
}
