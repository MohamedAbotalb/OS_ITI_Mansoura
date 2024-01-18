#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
    x = y = 0;
}

Point::Point(int _xy) {
    x = y = _xy;
}

Point::Point(int _x, int _y) {
    x = _x;
    y = _y;
}

void Point::setX(int _x) {
    x = _x;
}

int Point::getX() {
    return x;
}

void Point::setY(int _y) {
    y = _y;
}

int Point::getY() {
    return y;
}

void Point::setPoint(int _x, int _y) {
    x = _x;
    y = _y;
}

void Point::print() {
    cout << "(" << x << "," << y << ")" << endl;
}
