#include <iostream>

using namespace std;

// basic arithmetic and loops

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

void loopMessage(int times) {
    for(int i = 0; i < times; i++) {
        cout << "This is a new message at iteration " << (i + 1) << endl;
    }
}


int main() {
    char name[] = "";
    cout << "Hello World!" << endl;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello, " << name << endl;
    cout << "The sum of 1 and 2 is " << add(1, 2) << endl;
    cout << "The product of 2 and 4 is " << multiply(2, 4) << endl;
    loopMessage(4);
    return 0;
}
