#include <iostream>
#include "graphics.h"
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

Rectangl::Rectangl(): upperLeft(0), lowerRight(0, 0) {};

Rectangl::Rectangl(Point p1, Point p2): upperLeft(p1), lowerRight(p2) {};

Rectangl::Rectangl(int _x1, int _y1, int _x2, int _y2): upperLeft(_x1, _y1), lowerRight(_x2, _y2) {};

void Rectangl::setUpperLeft(int _x, int _y) {
    upperLeft.setPoint(_x, _y);
}

void Rectangl::setUpperLeft(Point p) {
    upperLeft = p;
}

Point Rectangl::getUpperLeft() {
    return upperLeft;
}

void Rectangl::setLowerRight(int _x, int _y) {
    lowerRight.setPoint(_x, _y);
}

void Rectangl::setLowerRight(Point p) {
    lowerRight = p;
}

Point Rectangl::getLowerRight() {
    return lowerRight;
}

void Rectangl::draw() {
    rectangle(upperLeft.getX(), upperLeft.getY(), lowerRight.getX(), lowerRight.getY());
}

void Rectangl::print() {
    cout << "Rectangle is created using these points: " << endl;
    upperLeft.print();
    lowerRight.print();
}
