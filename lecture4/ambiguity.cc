#include <iostream>
using namespace std;

void f(int n, double m){
  cout << "1" << endl;
}

void f(double n, int m){
  cout << "2" << endl;
}

void f(int n, int m){
  cout << "3" << endl;
}

int main(){
  //f(98, 99);
  //f(5.3, 4);
  f(4.3, 5.2);
  return 0;
}
