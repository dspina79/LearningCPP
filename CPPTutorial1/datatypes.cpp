#include <iostream>
using namespace std;

void printASCII();
void printBooleans();

int main() {
    short x = 40;
    unsigned short ux = 299;
    int y = 1672747589;
    unsigned int uy = 2672747589;
    long l = 314981234974720;
    long long ll = 7247923479299;
    unsigned long long ull = 3789324589124791292;
    
    cout << "CHAR_MAX = " << CHAR_MAX << endl;
    cout << "SHORT_MAX (Int16) = " << INT16_MAX << endl;;
    cout << "INT_MAX = " << INT_MAX << endl;
    cout << "ULONG_MAX = " << ULLONG_MAX << endl;
    cout << "ULLONG_MAX = " << ULLONG_MAX << endl;
    // 18,446,744,073,709,551,615 = 18 quntilion

    bool bx = true;
    if (bx) {
        cout << "Well, of course x is true." << endl;
    }

    char weird = 55;
    char weirdOther = 67;
    cout << "CHAR(55) = " <<  weird << endl;
    cout << "CHAR(67) = " <<  weirdOther << endl;
    
    //printASCII();
    printBooleans();

    return 0;
}

void printBooleans () {
    bool someTruth = true;
    cout << "Boolean without boolAlpha is " << someTruth << endl;
    cout << "Boolean with boolAlpha is " << boolalpha << someTruth << endl;
}

void printASCII() {
    for (int i = 0; i < CHAR_MAX; i++) {
        char c = i;
        cout << "CHAR (" << i << "): " << c << endl;
    } 
}