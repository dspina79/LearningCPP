#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main() {
    cout << "Basic square root" << endl;
    cout << "The square root of 25 is " << sqrt(25) << endl;
    cout << "Imaginary square root" << endl;
    cout << "The square root of -25 is " << sqrt(-25) << endl;
    cout << "Show infinity" << endl;
    cout << "9 raised to the 999th power in C++ is: " << pow(9, 999) << endl;
    cout << "Show negative infinity" << endl;
    cout << "-9 raised to the 999th power in C++ is: " << pow(-9, 999) << endl;
    cout << "Floating point mins and maxes" << endl;
    cout << "The max of 10 and 9.99 is " << fmax(10, 9.99) << endl;
    cout << "The min of 10 and 9.99 is " << fmin(10, 9.99) << endl;

    cout << "The trunc of -3.299 is " << trunc(-3.299) << endl;
    cout << "The floor of -3.299 is " << floor(-3.299) << endl;
    
    return 0;
}