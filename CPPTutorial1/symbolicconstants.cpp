#include <iostream>
#define Y 20
#define PI_BASIC 3.14159

using std::cout;

double getArea(double);

int main() {
    // literal constants, etc.

    const int x = 5;
    cout << "Const: " << x << std::endl;
    cout << "Define Constant: " << Y << std::endl;

    // enum constants
    enum {z = 30};
    cout << "Enum Constant: " << z << std::endl;
    double radius = 6.5;
    cout << "The area of a cirlce with a radius " << radius << " is about " << getArea(radius) << std::endl;

    return 0;
}

double getArea(double radius) {
    return PI_BASIC * (radius * radius);
}