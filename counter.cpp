#include <iostream>
using namespace std;

extern int globalCount;

// define function
void counter(void) 
{
  static int staticIndex = 5;
  int nonStaticIndex = 5;

  staticIndex++;
  nonStaticIndex++;
  
  cout << "staticIndex is " << staticIndex ;
  cout << " and nonStaticIndex is " << nonStaticIndex;
  cout << " and globalCount is " << globalCount << endl;
}