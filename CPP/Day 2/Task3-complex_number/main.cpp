#include <iostream>

using namespace std;

/* Create a class for Complex number with its values real and imagine with constructors, setters, getters and member functions */

class Complex {
    int real;
    int imagine;

public:
    Complex() {
        real = imagine = 0;
    }
    Complex(int _real, int _imagine) {
        real = _real;
        imagine = _imagine;
    }
    void setReal(int _real) {
        real = _real;
    }
    int getReal() {
        return real;
    }
    void setImagine(int _imagine) {
        imagine = _imagine;
    }
    int getImagine() {
        return imagine;
    }
    void setComplexNumber(int _real, int _imagine) {
        real = _real;
        imagine = _imagine;
    }
    void printComplexNumber() {
        if (imagine > 0)
            cout << "Complex Number = " << real << "+" << imagine << endl;
        else if (imagine < 0)
            cout << "Complex Number = " << real << imagine << endl;
        else
            cout << "Complex Number = " << real << "0" << endl;
    }
    Complex add(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imagine = imagine + c.imagine;

        return result;
    }
};

int addComplexNumber(Complex, Complex);

int main()
{
    Complex c1, c2(10, 20), c3;
    Complex c4, c5(6, 9);

    c1.setReal(2);
    c1.setImagine(4);
    c3 = c1.add(c2);
    c3.printComplexNumber();

    c4.setReal(3);
    c4.setImagine(5);
    int result = addComplexNumber(c4, c5);
    cout << "Result = " << result << endl;

    return 0;
}

int addComplexNumber(Complex c1, Complex c2) {
    int real = c1.getReal() + c2.getReal();
    int imagine = c1.getImagine() + c2.getImagine();

    return real + imagine;
}
