#include "Rectangl.h"
#include <string.h>
#include <iostream>

using namespace std;

Rectangl::Rectangl(int _firstDim, int _secondDim): Shape(_firstDim, _secondDim) {};

float Rectangl::calculateArea() {
    return firstDimension * secondDimension;
}

void Rectangl::print() {
    cout << "Rectangle";
}

Rectangl::~Rectangl()
{
    //dtor
}
