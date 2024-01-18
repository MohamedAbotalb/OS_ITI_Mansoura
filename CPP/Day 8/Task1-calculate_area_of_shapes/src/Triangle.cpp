#include "Triangle.h"
#include <string.h>
#include <iostream>

using namespace std;

Triangle::Triangle(int _firstDim, int _secondDim): Shape(_firstDim, _secondDim) {};

float Triangle::calculateArea() {
    return 0.5 * firstDimension * secondDimension;
}

void Triangle::print() {
    cout << "Triangle";
}

Triangle::~Triangle()
{
    //dtor
}
