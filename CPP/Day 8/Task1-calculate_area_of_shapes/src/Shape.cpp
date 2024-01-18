#include "Shape.h"
#include <string.h>

Shape::Shape(int _firstDim, int _secondDim) {
    firstDimension = _firstDim;
    secondDimension = _secondDim;
}

void Shape::setFirstDimension(int _firstDim) {
    firstDimension = _firstDim;
}

int Shape::getFirstDimension() {
    return firstDimension;
}

void Shape::setSecondDimension(int _secondDim) {
    secondDimension = _secondDim;
}

int Shape::getSecondDimension() {
    return secondDimension;
}

Shape::~Shape()
{
    //dtor
}
