#include <iostream>
using namespace std;

template<class T>
void showStuff1(int stuff1, T stuff2, T stuff3){
  cout << stuff1 << endl;
  cout << stuff2 << endl;
  cout << stuff3 << endl;
}

template<class T1, class T2>
void showStuff2(int stuff1, T1 stuff2, T2 stuff3){
  cout << stuff1 << endl;
  cout << stuff2 << endl;
  cout << stuff3 << endl;
}

#if 1
template<class Z1, class Z2>
void showStuff3(int stuff1, Z1 stuff2, Z1 stuff3){
  cout << stuff1 << endl;
  cout << stuff2 << endl;
  cout << stuff3 << endl;
}
#endif

int main(){
  int integer1=1, integer2=2, integer3=3;
  showStuff1(integer1,integer2,integer3);

  cout << "==========" << endl;

  double d1 = 1.1;
  char c1 = 'A';

  showStuff2(integer1, d1, c1);

  showStuff3(integer1, d1, d1);

  return 0;
}
