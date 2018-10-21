#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Vector
// http://www.cplusplus.com/reference/vector/vector/vector/

void loopNames(vector<char> names)
{
    cout << names.size() << endl;

    for_each (names.begin(), names.end(), [](char name){
        cout << name << endl;
    });
}

void arrayFunctions()
{
    vector<char> names{'a', 'b', 'c', 'd', 'e'};
    loopNames(names);
}