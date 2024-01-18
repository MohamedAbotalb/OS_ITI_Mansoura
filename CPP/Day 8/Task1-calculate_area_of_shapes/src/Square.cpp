#include "Square.h"
#include <string.h>
#include <iostream>

using namespace std;

Square::Square(int _firstDim): Shape(_firstDim) {};

void Square::setFirstDimension(int _firstDim) {
    firstDimension = secondDimension = _firstDim;
}

void Square::setSecondDimension(int _secondDim) {
    firstDimension = secondDimension = _secondDim;
}

void Square::print() {
    cout << "Square";
}

float Square::calculateArea() {
    return firstDimension * firstDimension;
}

Square::~Square()
{
    //dtor
}
