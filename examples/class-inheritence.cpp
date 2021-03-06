#include <iostream>
using namespace std;

class Shape {
    public:
        Shape(int w, int h):width(w),height(h){};
        void setWidth(int w) {
            width = w;
        };
        void setHeight(int h) {
            height = h;
        }
        int getArea(void) {
            return width * height;
        }
        void printPerimeter(void) {
            cout << "No perimeter is printed at base class" << endl;
        }
      
    protected:
        int width;
        int height;
};

class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Square is drived from Shape and PaintCost classes
class Square: public Shape, public PaintCost {
    public:
        Square(int w): Shape(w, w) {};

        void printPerimeter(void) {
            cout << "Square perimeter: " << (height * 4) << endl;
        };
    
};

class Rectangle: public Shape {
    public:
        Rectangle(int w, int h): Shape(w, h) {};
};

void subClassFunctions() {
    Square square(10);
    Rectangle rect(10, 20);

    int area = square.getArea();
    cout << "Area of square: " << area << endl;
    cout << "PaintCost: " << square.getCost(area) << endl;

    square.printPerimeter();
    rect.printPerimeter();
}