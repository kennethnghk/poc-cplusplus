#include <iostream>
using namespace std;

// Base class, ie. interface
class ShapeClass {
    protected:
        int width;
        int height;

    public:
        // pure virtual functon for interface class
        virtual int getArea() = 0;
        ShapeClass(int w, int h) : width(w), height(h) {};
};

// Derived class
class RectangleClass: public ShapeClass {
    public:
        RectangleClass(int w, int h): ShapeClass(w,h) {};
        int getArea() {
            return (width * height);
        }
};

class TriangleClass: public ShapeClass {
    public:
        TriangleClass(int w, int h): ShapeClass(w,h) {};
        int getArea() {
            return (width * height)/2;
        }
};

void interfaceClassFunctions() {
    RectangleClass rect(10,20);
    TriangleClass tri(10,20);

    cout << "Area of RectangleClass: " << rect.getArea() << endl;
    cout << "Area of TriangleClass: " << tri.getArea() << endl;
}