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
    cout << "The motto is \"" << motto << "\"." << endl;
}

string insertString(string original, string toInsert, int position) {
    return original.insert(position, toInsert);
}

void tryPopBack(string value) {
    int initialLength = value.length();
    for (int i = 0; i < initialLength; i++) {
        value.pop_back();
        cout << value << endl;
    }
}

void findReplace(string original, string toFind, string toReplace) {
    cout << "The original is " << original << endl;
    int source = original.find(toFind);
    if (source >= 0) {
        original.replace(source, toFind.length(), toReplace);
    }

    cout << "The new output is " << original << endl;
}

int main() {
    string greeting = "Hello";
    string emptyString; // defaults to empty string
    cout << greeting[2] << " is the third character in the stirng " << greeting << endl;
    cout << greeting << " has a length of " << greeting.length() << endl;
    cout << greeting << " there" << endl;
    cout << greet("Dean") << endl;
    cout << "The phrase 'NOT' inserted at position 7 of 'The end is near' is: " << insertString("The end is near", "NOT", 7) << endl;
    cout << "Erasing the first two characters of 'Hello' is " << greeting.erase(0, 2) << endl;
    //getInputWithGetLine();
    string testValue = "quickly diminishing";
    tryPopBack(testValue);
    findReplace("Holding my hand", "Holding", "Gripping");
    return 0;
}