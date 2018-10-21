#include <iostream>
#include <string>
using namespace std;

void stringFunctions()
{
    // different for string and char
    char charName[0];
    cout << "Please enter your name : " << endl;
    cin >> charName;
    cout << "The charName is : " << charName << endl;

    string stringName;
    cout << "Please enter your name : " << endl;
    cin >> stringName;
    cout << "The stringName is : " << stringName << endl;

    cerr << "Error message is here " << endl;
    clog << "Error log is here " << endl;

    return;
}