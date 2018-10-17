#include <iostream>
using namespace std;

int testFunc() {
    return 49;
}

int main(int argc, char const *argv[])
{
  cout << "Hello World2" << endl;
  cout << "Size of char : " << sizeof(char) << endl;

  enum color { red, green, blue } c;
  c = blue;
  cout << "c is " << c << endl;

  int testFuncResult = testFunc();
  cout << "testFuncResult: " << testFuncResult << endl;

  return 0;
}