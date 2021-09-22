#include <iostream>
using namespace std;

int AddOneRef(int& i) {
  return i++;
  //return ++i;
}

int AddOne(int i) {
  return i++;
  //return ++i;
}

int main()
{
  int i = 1;

  cout << "before: " <<  i << endl;
  cout << AddOneRef(i) << endl;
  cout << "after : " << i << endl;
}
