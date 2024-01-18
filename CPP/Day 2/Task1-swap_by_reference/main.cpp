#include <iostream>

using namespace std;

/* Create a program to get two variables, swap the values and then print them before and after swapping */

void printValues(int, int);
void swapByReference(int&, int&);

int main()
{
    int firstNumber, secondNumber;

    cout << "Please enter the first number: ";
    cin >> firstNumber;

    cout << "Please enter the second number: ";
    cin >> secondNumber;

    cout << "Numbers values before swapping:" << endl;
    printValues(firstNumber, secondNumber);

    swapByReference(firstNumber, secondNumber);

    cout << "Numbers values after swapping:" << endl;
    printValues(firstNumber, secondNumber);

    return 0;
}

void printValues(int firstValue, int secondValue) {
    cout << "first number = " << firstValue << " second number = " << secondValue << endl;
}

void swapByReference(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}
