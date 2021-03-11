#include <iostream>
#include <float.h>

using std::cin;
using std::cout;

int main() {
    float a = 10.0 / 3;
    a *= 1000000000;
    double b;
    long double c;

    cout << std::fixed << a << std::endl; // shows that floats don't have a high reliability
    cout << "Significant Digits" << std::endl;
    cout << "Float: " << FLT_DIG << std::endl;
    cout << "Double: " << DBL_DIG << std::endl;
    cout << "Long Double: " << LDBL_DIG << std::endl;

    // therefore: use doubles (at least) and more signifance later on
    // there are other EXACT PRECISION data types
}