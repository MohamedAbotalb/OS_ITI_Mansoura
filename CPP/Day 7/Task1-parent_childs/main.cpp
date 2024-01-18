#include <iostream>
#include "FirstChild.h"
#include "SecondChild.h"
#include "Parent.h"

using namespace std;

void firstFunction(Parent**, int);
void secondFunction(Parent**, int);
void thirdFunction(Parent**, int);

int main()
{
    Parent p1(1, 2);
    FirstChild fc1(3, 4, 5);
    SecondChild sc1(6, 7, 8, 9);

    Parent* objectsArray[3] = {&p1, &fc1, &sc1};

    firstFunction(objectsArray, 3);

    secondFunction(objectsArray, 3);

    thirdFunction(objectsArray, 3);

    return 0;
}

// print the object content
void firstFunction(Parent** p, int size) {
    int i;
    for (i = 0; i < size; i++)
        p[i]->print();
}

// calculate the sum of group of objects
void secondFunction(Parent** p, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += p[i]->add();

    cout << "Sum = " << sum << endl;
}

// calculate the sum of multiplication of group of objects
void thirdFunction(Parent** p, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += p[i]->multiple(); // 2 +

    cout << "Sum of multiplications = " << sum << endl;
}
