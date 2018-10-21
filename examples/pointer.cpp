#include <iostream>
using namespace std;

void swapByValue(int x, int y)
{
    int tempX = y;
    y = x;
    x = tempX;
}

void swapByPointer(int *x, int *y)
{
    int tempX = *y;
    *y = *x;
    *x = tempX;
}

void swapByReference(int &x, int &y)
{
    int tempX = y;
    y = x;
    x = tempX;
}

void swapFunctions()
{
    int a = 100;
    int b = 200;
    int c = 100;
    int d = 200;
    int e = 100;
    int f = 200;

    swapByValue(a,b);
    cout << "After swapByValue, a=" << a << " b=" << b << endl;

    swapByPointer(&c, &d);
    cout << "After swapByPointer, c=" << c << " d=" << d << endl;

    swapByReference(e, f);
    cout << "After swapByReference, e=" << f << " e=" << f << endl;
}

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

void referenceFunctions()
{
    int var = 99;
    int &ref = var;

    cout << "value of var : " << var << endl;
    cout << "value of ref : " << ref << endl;

    var = var + 100;
    cout << "after (var = var + 100), value of var: " << var << endl;
    cout << "after (var = var + 100), value of ref: " << ref << endl;

    ref = ref + 100;
    cout << "after (ref = ref + 100), value of var: " << var << endl;
    cout << "after (ref = ref + 100), value of ref: " << ref << endl;
}