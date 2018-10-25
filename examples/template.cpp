#include <iostream>
#include <typeinfo>
using namespace std;

// function templates, allow various data type T
template <class T>
T getGreater(T a, T b) { // data type of a and b are still undefined
    return (a > b) ? a : b;
}

template <class T1, class T2>
void checkDataType(T1 a, T2 b) {
    cout << a << " data type: " << typeid(a).name() << endl;
    cout << b << " data type: " << typeid(b).name() << endl;
}

// class template
template <class T3, class T4>
class NumberClass {
    T3 x;
    T4 y;

    public:
        NumberClass(T3 x, T4 y): x(x), y(y){};
        void printDataType() {
            cout << x << " data type: " << typeid(x).name() << endl;
            cout << y << " data type: " << typeid(y).name() << endl;
        }
        void isGreaterThan();
};

template <class T3, class T4>
void NumberClass<T3, T4>::isGreaterThan() {
    cout << x << " is " << (x > y ? "" : "not ") << "greater than " << y << endl;
}

void templateFunctions() {
    // define T => int when function is called
    cout << "isGreaterThan, int : " << getGreater<int> (20, 10) << endl;
    cout << "isGreaterThan, double : " << getGreater<double> (99.13, 22.53) << endl;

    checkDataType<int, string>(33, "abc");

    NumberClass<int, double> number(45, 33.22);
    number.printDataType();
    number.isGreaterThan();
}