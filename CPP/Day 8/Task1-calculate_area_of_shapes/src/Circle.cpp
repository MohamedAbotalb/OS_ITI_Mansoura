#include "Circle.h"
#include <string.h>
#include <iostream>

using namespace std;

Circle::Circle(int _radius): Shape(_radius) {\
};

void Circle::setFirstDimension(int _firstDim) {
    firstDimension = secondDimension = _firstDim;
}

void Circle::setSecondDimension(int _secondDim) {
    firstDimension = secondDimension = _secondDim;
}

void Circle::print() {
    cout << "Circle";
}

float Circle::calculateArea() {
    return PI * firstDimension * firstDimension;
}

Circle::~Circle()
{
    //dtor
}
