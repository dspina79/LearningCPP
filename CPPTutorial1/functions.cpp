#import <iostream>
#import <cmath>

using std::string;
using std::cin;
using std::cout;

double add(double, double); // declaration
void basicGreeter(string);

int main() {
    int base, exponent;
    double x, y;
    string name;

    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << base << " to the power of " << exponent << " is " << result << "\n";

    cout << "Enter in a number: ";
    cin >> x;
    cout << "Now another number: ";
    cin >> y;
    cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;
    cout << "Now enter your name: ";
    cin >> name;
    basicGreeter(name);

    return 0;
}

void basicGreeter(string name) {
    cout << "Hello, " << name << std::endl;
}

double add(double x, double y) {
    return x + y;
}