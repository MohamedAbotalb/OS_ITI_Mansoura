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
    // Copy constructor
    Complex(Complex& c) {
        real = c.real;
        imagine = c.imagine;
    }
    // Setter and Getter
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
    // Operator overloading
    // + operator
    Complex operator+(Complex& c) {
        int real = getReal() + c.getReal();
        int img = getImagine() + c.getImagine();
        return Complex(real, img);
        /*Complex result;
        result.setReal(real + c.getReal();
        result.setImagine(imagine + c.getImagine());
        return result;*/
    }
    // Complex + int
    Complex operator+(int number) {
        int re = real + number;
        return Complex(re, imagine);
    }
    // int + Complex
    friend Complex operator+(int number, Complex& c);

    // - operator
    Complex operator-(Complex& c) {
        int real = getReal() - c.getReal();
        int img = getImagine() - c.getImagine();
        return Complex(real, img);
    }
    // * operator
    Complex operator*(Complex& c) {
        int real = getReal() * c.getReal();
        int img = getImagine() * c.getImagine();
        return Complex(real, img);
    }
    // / operator
    Complex operator/(Complex& c) {
        int real = getReal() / c.getReal();
        int img = getImagine() / c.getImagine();
        return Complex(real, img);
    }
    // == operator
    int operator==(Complex& c) {
        return real == c.getReal() && imagine == c.getImagine();
    }
    // != operator
    int operator!=(Complex& c) {
        return !(*this == c);
    }
    // += operator
    Complex operator+=(Complex& c) {
        real = real + c.getReal();
        imagine = imagine + c.getImagine();
        return *this;
    }
    // -= operator
    Complex operator-=(Complex& c) {
        real = real - c.getReal();
        imagine = imagine - c.getImagine();
        return *this;
    }
    // ++ operator prefix
    Complex operator++() {
        real++;
        return *this;
    }
    // ++ operator postfix
    Complex operator++(int) {
        Complex result(real, imagine);
        real++;
        return result;
    }
    // -- operator prefix
    Complex operator--() {
        real--;
        return *this;
    }
    // -- operator postfix
    Complex operator--(int) {
        Complex result(real, imagine);
        real--;
        return result;
    }
    // type casting
    explicit operator int() {
        return real;
    }
};

int addComplexNumberByValue(Complex, Complex);
int addComplexNumberByReference(Complex&, Complex&);

int main()
{
    Complex c1(15, 30), c2(10, 20);

    cout << "Complex + Complex:" << endl;
    Complex c3 = c1 + c2;
    c3.printComplexNumber();

    cout << "Complex - Complex:" << endl;
    c3 = c1 - c2;
    c3.printComplexNumber();

    cout << "Complex * Complex:" << endl;
    c3 = c1 * c2;
    c3.printComplexNumber();

    cout << "Complex / Complex:" << endl;
    c3 = c1 / c2;
    c3.printComplexNumber();

    cout << "Complex == Complex:" << endl;
    Complex c4(1, 2), c5(1, 2);
    if (c4 == c5)
        cout << "c4 is equal to c5" << endl;
    else
        cout << "c4 is not equal to c5" << endl;

    cout << "Complex != Complex:" << endl;
    Complex c6(1, 2), c7(2, 2);

    if (c6 != c7)
        cout << "c6 is not equal to c7" << endl;
    else
        cout << "c6 is equal to c7" << endl;

    cout << "++Complex:" << endl;
    ++c6;
    c6.printComplexNumber();

    cout << "Complex++:" << endl;
    c6++;
    c6.printComplexNumber();

    cout << "--Complex:" << endl;
    --c7;
    c7.printComplexNumber();

    cout << "Complex--:" << endl;
    c7--;
    c7.printComplexNumber();

    cout << "Complex + int:" << endl;
    int x = 10;
    c3 = c6 + x;
    c3.printComplexNumber();

    cout << "int + Complex:" << endl;
    c3 = x + c7;
    c3.printComplexNumber();

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

Complex operator+(int number, Complex& c) {
    return c + number;
}
