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

void testFunctions()
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
