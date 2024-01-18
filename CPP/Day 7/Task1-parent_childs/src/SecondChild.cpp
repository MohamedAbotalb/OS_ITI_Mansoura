#include <iostream>
#include "SecondChild.h"

using namespace std;

SecondChild::SecondChild(int _first, int _second, int _third, int _fourth): Parent(_first, _second) {
    third = _third;
    fourth = _fourth;
}

void SecondChild::setThird(int _third) {
    third = _third;
}

int SecondChild::getThird() {
    return third;
}

void SecondChild::setFourth(int _fourth) {
    fourth = _fourth;
}

int SecondChild::getFourth() {
    return fourth;
}

void SecondChild::setSecondChild(int _first, int _second, int _third, int _fourth) {
    first = _first;
    second = _second;
    third = _third;
    fourth = _fourth;
}

void SecondChild::print() {
    cout << "Second Child:" << endl;
    Parent::print();
    cout << "Third Number = " << third << endl;
    cout << "Fourth Number = " << fourth << endl;
}

int SecondChild::add() {
    return Parent::add() + third + fourth;
}

int SecondChild::multiple() {
    return Parent::multiple() * third * fourth;
}

