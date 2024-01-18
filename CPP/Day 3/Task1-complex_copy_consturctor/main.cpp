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
    Complex(Complex& c) {
        real = c.real;
        imagine = c.imagine;
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
            cout << "Complex Number = " << real << "+" << imagine << "J" << endl;
        else if (imagine < 0)
            cout << "Complex Number = " << real << imagine << "J" << endl;
        else
            cout << "Complex Number = " << real << endl;
    }
    Complex addTwoComplexNumbers(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imagine = imagine + c.imagine;

        return result;
    }
};

int addComplexNumberByValue(Complex, Complex);
int addComplexNumberByReference(Complex&, Complex&);

int main()
{
    Complex c1, c2(10, 20), c3;
    Complex c4, c5(6, 9), c6;

    c1.setReal(2);
    c1.setImagine(4);
    c3 = c1.addTwoComplexNumbers(c2);
    c3.printComplexNumber();

    // Calculate the sum of two complex numbers without copy constructor
    c4.setReal(3);
    c4.setImagine(5);
    int result = addComplexNumberByValue(c4, c5);
    cout << "Result without copy constructor = " << result << endl;

    // Calculate the sum of two complex numbers with copy constructor
    c6.setComplexNumber(4, 10);
    Complex c7(c6);
    result = addComplexNumberByReference(c6, c7); // 14 + 14 = 28
    cout << "Result with copy constructor = " << result << endl;

    return 0;
}

int addComplexNumberByValue(Complex c1, Complex c2) {
    int real = c1.getReal() + c2.getReal();
    int imagine = c1.getImagine() + c2.getImagine();

    return real + imagine;
}

int addComplexNumberByReference(Complex& c1, Complex& c2) {
    int real = c1.getReal() + c2.getReal();
    int imagine = c1.getImagine() + c2.getImagine();

    return real + imagine;
}
