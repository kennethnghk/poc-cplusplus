#include <iostream>
using namespace std;

class Box {
    public:
        int getVolume(void) {
            return width * height * length;
        };

        void setDimentions(int w, int h, int l){
            width = w;
            height = h;
            length = l;
        };

        // overload the + operator
        Box operator+(const Box &b) {

            int newWidth = this->width + b.width;
            int newHeight = this->height + b.height;
            int newLength = this->length + b.length;
            
            // create new object
            Box box;
            box.setDimentions(newWidth, newHeight, newLength);
            return box;
        }

    private:
        int width;
        int height;
        int length;
};

class PrintData {
    public:

        // overload print() to accept different parameter types
        void print(int i) {
            cout << "PrintData.print int: " << i << endl;
        };
        void print(string str) {
            cout << "PrintData.print string: " << str << endl;
        }
};

void overloadFunctions() {
    PrintData printData;

    printData.print(1);
    printData.print("whyhaha");

    Box box1;
    Box box2;
    Box box3;

    box1.setDimentions(1,1,1);
    box2.setDimentions(2,2,2);

    box3 = box1 + box2;
    cout << "Volume of box3 is " << box3.getVolume() << endl;
}