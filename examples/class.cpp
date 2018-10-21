#include <iostream>
#include <string>
using namespace std;

class Box {
    string name;

    public:
        int width;
        int height;
        int length;
        void setName(string);
        void setWidth(int);
        string getName(void);
        int getVolume(void);
        Box(int, int, int); // constructor
};

Box::Box(int wid, int len, int hgt):width(wid),length(len) // assign width and height member
{
    height = hgt * 2;
}

void Box::setWidth(int newWidth)
{
    width = newWidth;
}

void Box::setName(string newName)
{
    name = newName;
}

string Box::getName(void)
{
    return name;
}

int Box::getVolume(void)
{
    return width * height * length;
}

void classFunctions()
{
    Box box1(40, 50, 70);
    box1.setName("hahabox");

    cout << "Volume : " << box1.getVolume() << endl;

    box1.setWidth(90);
    cout << "New volume : " << box1.getVolume() << endl;

    cout << "Box1 name : " << box1.getName() << endl;
}