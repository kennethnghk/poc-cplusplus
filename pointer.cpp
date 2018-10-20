#include <iostream>
using namespace std;

void pointerFunctions()
{
    int var = 100;
    int *pnt;

    pnt = &var; // store the addess of var
    
    cout << "value of var: " << var << endl;
    cout << "address stored of pnt: " << pnt << endl;
    cout << "value of *pnt: " << *pnt << endl;

    var = var + 100;
    cout << "after (var = var + 100), value of var: " << var << endl;
    cout << "after (var = var + 100), address stored of pnt: " << pnt << endl;
    cout << "after (var = var + 100), value of *pnt: " << *pnt << endl;

    *pnt = *pnt + 100;
    cout << "after (*pnt = *pnt + 100), value of var: " << var << endl;
    cout << "after (*pnt = *pnt + 100), address stored of pnt: " << pnt << endl;
    cout << "after (*pnt = *pnt + 100), value of *pnt: " << *pnt << endl;
}