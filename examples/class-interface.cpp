#include <iostream>
using namespace std;

namespace AbstractClass {
    // Base class, ie. interface
    class Shape {
        protected:
            int width;
            int height;

        public:
            // pure virtual functon for interface class
            virtual int getArea() = 0;
            Shape(int w, int h) : width(w), height(h) {};
    };

    // Derived class
    class Rectangle: public Shape {
        public:
            Rectangle(int w, int h): Shape(w,h) {};
            int getArea() {
                return (width * height);
            }
    };

    class Triangle: public Shape {
        public:
            Triangle(int w, int h): Shape(w,h) {};
            int getArea() {
                return (width * height)/2;
            }
    };
}

void interfaceClassFunctions() {
    AbstractClass::Rectangle rect(10,20);
    AbstractClass::Triangle tri(10,20);

    cout << "Area of Rectangle: " << rect.getArea() << endl;
    cout << "Area of Triangle: " << tri.getArea() << endl;
}