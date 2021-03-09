#import <iostream>
#import <cmath>

using std::cin;
using std::cout;

int main() {
    int base, exponent;
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << base << " to the power of " << exponent << " is " << result << "\n";

    return 0;
}