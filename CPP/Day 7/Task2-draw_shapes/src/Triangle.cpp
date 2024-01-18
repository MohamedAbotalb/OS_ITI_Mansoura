#include <iostream>
#include <graphics.h>
#include "Triangle.h"
#include "Shape.h"

using namespace std;

Triangle::Triangle(): upper(0), right(0, 0), left(0, 0) {};

Triangle::Triangle(Point p1, Point p2, Point p3): upper(p1), right(p2), left(p3) {};

Triangle::Triangle(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3): upper(_x1, _y1), right(_x2, _y2), left(_x3, _y3) {};

void Triangle::setUpper(int _x, int _y) {
    upper.setPoint(_x, _y);
}

void Triangle::setUpper(Point p) {
    upper = p;
}

Point Triangle::getUpper() {
    return upper;
}

void Triangle::setRight(int _x, int _y) {
    right.setPoint(_x, _y);
}

void Triangle::setRight(Point p) {
    right = p;
}

Point Triangle::getRight() {
    return right;
}

void Triangle::setLeft(int _x, int _y) {
    left.setPoint(_x, _y);
}

void Triangle::setLeft(Point p) {
    left = p;
}

Point Triangle::getLeft() {
    return left;
}

void Triangle::draw() {

}

void Triangle::print() {
    cout << "Triangle is created using these points: " << endl;
    upper.print();
    right.print();
    left.print();
}
