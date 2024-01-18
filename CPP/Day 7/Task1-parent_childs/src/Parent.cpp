#include <iostream>
#include "Parent.h"

using namespace std;

Parent::Parent(int _first, int _second)
{
    first = _first;
    second = _second;
}

void Parent::setFirst(int _first) {
    first = _first;
}

int Parent::getFirst() {
    return first;
}

void Parent::setSecond(int _second) {
    second = _second;
}

int Parent::getSecond() {
    return second;
}

void Parent::setParent(int _first, int _second) {
    first = _first;
    second = _second;
}

void Parent::print() {
    cout << "First Number = " << first << " Second Number = " << second << endl;
}

int Parent::add() {
    return first + second;
}

int Parent::multiple() {
    return first * second;
}
