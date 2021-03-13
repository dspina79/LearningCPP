#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string greet(string name)  {
    return "Hello, " + name;
}

int main() {
    string greeting = "Hello";
    string emptyString; // defaults to empty string
    cout << greeting[2] << " is the third character in the stirng " << greeting << endl;
    cout << greeting << " has a length of " << greeting.length() << endl;
    cout << greeting << " there" << endl;
    cout << greet("Dean") << endl;
    return 0;
}