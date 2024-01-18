#include <iostream>
#include "graphics.h"
#include "Rectangle.h"

using namespace std;

Rect::Rect(): upperLeft(0), lowerRight(0, 0) {};

Rect::Rect(Point p1, Point p2): upperLeft(p1), lowerRight(p2) {};

Rect::Rect(int _x1, int _y1, int _x2, int _y2): upperLeft(_x1, _y1), lowerRight(_x2, _y2) {};

void Rect::setUpperLeft(int _x, int _y) {
    upperLeft.setPoint(_x, _y);
}

void Rect::setUpperLeft(Point p) {
    upperLeft = p;
}

Point Rect::getUpperLeft() {
    return upperLeft;
}

void Rect::setLowerRight(int _x, int _y) {
    lowerRight.setPoint(_x, _y);
}

void Rect::setLowerRight(Point p) {
    lowerRight = p;
}

Point Rect::getLowerRight() {
    return lowerRight;
}

void Rect::draw() {
    rectangle(upperLeft.getX(), upperLeft.getY(), lowerRight.getX(), lowerRight.getY());
}

void Rect::print() {
    cout << "Rectangle is created using these points: " << endl;
    upperLeft.print();
    lowerRight.print();
}
