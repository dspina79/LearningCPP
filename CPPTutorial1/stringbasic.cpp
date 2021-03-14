#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string greet(string name)  {
    return "Hello, " + name;
}

void getInputWithoutGetLine() {
    string motto;
    cout << "Enter in your motto: ";
    cin >> motto; // will only get the first word, the rest is left in buffer
    cout << "The motto is " << motto << endl; 
}

void getInputWithGetLine() {
    string motto;
    cout << "What is your motto? ";
    getline(cin, motto);
    cout << "The motto is \"" << motto << "\"." endl;
}

int main() {
    string greeting = "Hello";
    string emptyString; // defaults to empty string
    cout << greeting[2] << " is the third character in the stirng " << greeting << endl;
    cout << greeting << " has a length of " << greeting.length() << endl;
    cout << greeting << " there" << endl;
    cout << greet("Dean") << endl;
 
    getInputWithGetLine();
 
    return 0;
}