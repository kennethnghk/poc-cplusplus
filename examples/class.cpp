#include <iostream>
#include <string>
using namespace std;

class Box {
    string name;

    public:
        int width;
        int height;
        int length;
        static int boxCount;

        Box(int wid, int len, int hgt):width(wid),length(len) { // assign width and height member
            height = hgt * 2;
            boxCount++;
        }

        void setName(string);
        void setWidth(int newWidth) { // inline function
            this->width = newWidth;
        };

        string getName(void) {
            return name;
        }
        int getVolume(void) {
            return width * height * length;
        }
        
        // static member function
        static int getBoxCount(void) {
            return boxCount;
        }

        friend void printName(Box box);
};

int Box::boxCount = 0;

void Box::setName(string newName) {
    name = newName;
}

// it is a friend function, can access all (include private and protected) members of Box
void printName(Box box) {
    cout << "Box name by friend function : " << box.name << endl;
}

void classFunctions() {
    Box box1(40, 50, 70);
    Box box2(90, 111, 20);
    Box *box1ptr = &box1; // declare pointer box1ptr

    box1.setName("hahabox");

    cout << "Height : " << box1.height << endl;
    cout << "Volume : " << box1.getVolume() << endl;

    box1.setWidth(90);
    cout << "New volume : " << box1.getVolume() << endl;
    cout << "Box1 name : " << box1.getName() << endl;
    cout << "Pointer box1 name : " << box1ptr->getName() << endl;

    cout << "Box count box1.boxCount: " << box1.boxCount << endl;
    cout << "Box count box2.boxCount: " << box2.boxCount << endl;
    cout << "Box count Box::boxCount: " << Box::boxCount << endl;
    cout << "Box count Box::getBoxCount: " << Box::getBoxCount() << endl;

    printName(box1);
}