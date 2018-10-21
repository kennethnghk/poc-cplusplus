#include <iostream>
#include <string>
using namespace std;

class Box {
    string name;

    public:
        int width;
        int height;
        int length;

        Box(int, int, int); // constructor

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
        
        friend void printName(Box box);
};

Box::Box(int wid, int len, int hgt):width(wid),length(len) { // assign width and height member
    height = hgt * 2;
}

void Box::setName(string newName) {
    name = newName;
}

// it is a friend function, can access all (include private and protected) members of Box
void printName(Box box) {
    cout << "Box name by friend function : " << box.name << endl;
}

void classFunctions() {
    Box box1(40, 50, 70);
    box1.setName("hahabox");

    cout << "Height : " << box1.height << endl;
    cout << "Volume : " << box1.getVolume() << endl;

    box1.setWidth(90);
    cout << "New volume : " << box1.getVolume() << endl;
    cout << "Box1 name : " << box1.getName() << endl;

    printName(box1);
}