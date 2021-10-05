#include <iostream>
using namespace std;

int main(){

  int a = 3, b = 5;
  int* po1 = &a;
  int* po2 = po1;

  int& re1 = a;
  int& re2 = re1;

  cout << "po1: " << &po1 << endl;
  cout << "po2: " << &po2 << endl;
  cout << "re1: " << &re1 << endl;
  cout << "re2: " << &re2 << endl;


#if 0
  //Error 1: cannot be null
  int& d = NULL;
#endif

#if 1
  //Error 2: initialize when declaring it
  int& d;
  c = a;
#endif

  return 0;
}
