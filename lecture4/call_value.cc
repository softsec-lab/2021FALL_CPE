#include <iostream>
using namespace std;

void funcOne(int a, int b){
  a = 5;
  b = 10;
}

int main(){
  int a = 1;
  int b = 2;

  funcOne(a, b);

  cout << "a:" <<  a << " b:" << b << endl;
  return 0;
}
