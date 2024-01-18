#include <iostream>
#include <graphics.h>
#include "Circle.h"

using namespace std;

Circle::Circle(): center(0) {
    radius = 1;
};

Circle::Circle(Point p1, int _radius): center(p1) {
    radius = _radius;
};

Circle::Circle(int _x, int _y, int _radius): center(_x, _y) {
    radius = _radius;
};

void Circle::setCenter(int _x, int _y) {
    center.setPoint(_x, _y);
}

void Circle::setCenter(Point p) {
    center = p;
}

void Circle::setRadius(int _radius) {
    radius = _radius;
}

int Circle::getRadius() {
    return radius;
}

void Circle::draw() {
    circle(center.getX(), center.getY(), radius);
}

void Circle::print() {
    cout << "Circle is created using this point: " << endl;
    center.print();
    cout << "Circle radius = " << getRadius() << endl;
}
