#include <iostream>
#include "FirstChild.h"

using namespace std;

FirstChild::FirstChild(int _first, int _second, int _third): Parent(_first, _second) {
    third = _third;
}

void FirstChild::setThird(int _third) {
    third = _third;
}

int FirstChild::getThird() {
    return third;
}

void FirstChild::setFirstChild(int _first, int _second, int _third) {
    first = _first;
    second = _second;
    third = _third;
}

void FirstChild::print() {
    cout << "First Child:" << endl;
    Parent::print();
    cout << "Third Number = " << third << endl;
}

int FirstChild::add() {
    return Parent::add() + third;
}

int FirstChild::multiple() {
    return Parent::multiple() * third;
}

