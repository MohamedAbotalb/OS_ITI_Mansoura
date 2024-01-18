#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(): upperLeft(0), lowerRight(0, 0) {};

Rectangle::Rectangle(Point p1, Point p2): upperLeft(p1), lowerRight(p2) {};

Rectangle::Rectangle(int _x1, int _y1, int _x2, int _y2): upperLeft(_x1, _y1), lowerRight(_x2, _y2) {};

void Rectangle::setUpperLeft(int _x, int _y) {
    upperLeft.setPoint(_x, _y);
}

void Rectangle::setUpperLeft(Point p) {
    upperLeft = p;
}

Point Rectangle::getUpperLeft() {
    return upperLeft;
}

void Rectangle::setLowerRight(int _x, int _y) {
    lowerRight.setPoint(_x, _y);
}

void Rectangle::setLowerRight(Point p) {
    lowerRight = p;
}

Point Rectangle::getLowerRight() {
    return lowerRight;
}

void Rectangle::print() {
    cout << "Rectangle is created using these points: " << endl;
    upperLeft.print();
    lowerRight.print();
}
