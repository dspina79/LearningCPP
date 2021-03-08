#include <iostream>

using namespace std;

// basic arithmetic and loops

class Mather {
    public:
        static int add(int x, int y) {
            return x + y;
        }

        static int subtract(int x, int y) {
            return x + y;
        }

        string greet(string myName) {
            return "Greetings " + myName;
        }
};

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

void makeNegative(int &x) {
    x *= -1;
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
    int x = 15;
    cout << "Right now, x is " << x << endl;
    makeNegative(x);
    cout << "Now, x is " << x << endl;
    loopMessage(4);

    Mather *maths;
    string greeting = maths->greet(name);
    cout << "Everything below is from the class...."  << endl;
    cout << "Greeting: " << greeting << endl;
    cout << "The sum of 7 and 6 is " << maths->add(7, 6) << endl;
    cout << "The difference between 7 and 6 is " << maths->subtract(7,6) << endl;



    return 0;
}
