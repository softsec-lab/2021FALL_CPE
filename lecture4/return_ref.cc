#include <iostream>
using namespace std;

int& test(int& a){
  cout << "a:" << a << " a address:" << &a << endl;
  return a;
}

int main(){
  int x = 10;

  cout << "x:" << x << " x address:" << &x << endl;
  test(x) = 20;
  cout << "After calling test func" << endl;
  cout << "x:" << x << " x address:" << &x << endl;
  
  return 0;
}
