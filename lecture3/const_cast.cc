#include <iostream>
using namespace std;

int main(){
  //ex1
  //const double a = 1.1;
  //double b = const_cast<double>(a);

  //ex2
  /*
  double a = 1.1;
  const double& b = a; 
  //b = 2.2;
  
  double& c = const_cast<double&>(b);
  c = 2.2;
  cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
*/ 

  //ex3
  //Beware! It is undefined behavior to modify a value which is initially declared as const.
  
  const double a = 1.1;
  const double& b = a; 
  double& c = const_cast<double&>(b);
  c = 2.2;
  cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

  return 0;
}







