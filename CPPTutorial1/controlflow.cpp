#include <iostream>

using namespace std;

void handleAge(int age) {
    switch (age) {
        case 18: 
            cout << "You're legal!";
            break;
        case 21:
            cout << "You're able to drink.";
            break;
        case 30:
            cout << "You're THIRTY";
            break;
        case 41:
            cout << "Nice number";
            break;
        default:
            cout << "Nothing special";
            break;
    }

    cout << endl;
}

void checkAge(int age) {
    if (age >= 21) {
        cout << "You can drink.";
    } else {
        cout << "You are too young to drink.";
    }

    cout << endl;
}

int main() {
    int age;
    cout << "What is your age? ";
    cin >> age;
    checkAge(age);
    handleAge(age);
}