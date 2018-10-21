#include <iostream>
using namespace std;

// define constant
#define FIXED_CONSTANT "fixed"

// define constant with a specific type
const int SPECIFIC_TYPE_CONST = 46;

int g = 50;

// global variable is intiatized with default value
int emptyChar;

int testFunc() {
    return 49;
}

// global variable
int globalCount = 10;

// declare function, extern means global to all files
extern void counter(void);

void arrayFunctions();
void pointerFunctions();
void swapFunctions();

int main(int argc, char const *argv[])
{
    cout << "Hello World2" << endl;
    cout << "Size of char : " << sizeof(char) << endl;

    enum color { red, green, blue } c;
    c = blue;
    cout << "c is " << c << endl;

    int testFuncResult = testFunc();
    cout << "testFuncResult: " << testFuncResult << endl;

    cout << "g is " << g << endl;
    cout << "empty char is " << emptyChar << endl;

    cout << "fixed const: " << FIXED_CONSTANT << endl;
    cout << "specific type const: " << SPECIFIC_TYPE_CONST << endl;

    while(globalCount--) {
        counter();
    }

    cout << endl;
    arrayFunctions();

    cout << endl;
    swapFunctions();

    cout << endl;
    pointerFunctions();

    return 0;
}