#include <iostream>

using namespace std;

int main()
{
  // static_cast
/*
  int intVar1 = 1, intVar2 = 2;
  cout << endl << "static_cast example" << endl;

  double doubleVar = static_cast<double>(intVar1) / intVar2;
  cout << doubleVar << endl;

  doubleVar = intVar1 / static_cast<double>(intVar2);
  cout << doubleVar << endl;

  doubleVar = static_cast<double>(intVar1 / intVar2);
  cout << doubleVar << endl;
*/
  //check this
  int intVar3 = 1;
  char charVar = 'c';

  char* int2char_cxxstyle = static_cast<char*>(&intVar3);
  int* char2int_cxxstyle = static_cast<int*>(&charVar);

  int* char2int_cstyle = (int*)(&charVar);
  char* int2char_cstyle = (char*)(&intVar3);
}





