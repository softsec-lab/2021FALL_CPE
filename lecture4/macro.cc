#include <iostream>
using namespace std;

#define HSJ

int main(){

#ifndef HSJ
cout << "HSJ not defined" << endl;
#endif

#ifndef CPE
cout << "CPE not defined" << endl;
#endif

  return 0;
}
