#include <iostream>
#include <ctime>

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

void stringFunctions();
void arrayFunctions();
void pointerFunctions();
void referenceFunctions();
void swapFunctions();

int main(int argc, char const *argv[])
{
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

    // time functions
    time_t now = time(0);
    cout << "current timestamp is " << now << endl;

    char *nowString = ctime(&now);
    cout << "current time is " << nowString << endl;

    cout << endl;
    arrayFunctions();

    cout << endl;
    swapFunctions();

    cout << endl;
    pointerFunctions();

    cout << endl;
    referenceFunctions();

    cout << endl;
    stringFunctions();

    return 0;
}