#include <iostream>

using namespace std;

int fibonacci(int);

int main()
{
    int result = fibonacci(7);
    cout << "index = " << result << endl;
    return 0;
}


int fibonacci(int number) {
    if (number <= 1) return number;
    else return fibonacci(number - 1) + fibonacci(number - 2);
}
