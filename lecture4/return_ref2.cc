#include <iostream>

using namespace std;

double& func( double& variable )
{
  return variable;
}

double& mal_func( double variable)
{
  variable = 10;
  cout << variable << endl;
  return variable;
}

int main() {
  double dVar = 3.14;

  //double& dVar2 = func(dVar);
  double& dVar2 = mal_func(dVar);
  cout << "&dVar:" << &dVar << endl;
  cout << "&dVar2:" << &dVar2 << endl;

  cout << dVar2 << endl;
  dVar2 = 5;
  cout << dVar << endl;
  cout << dVar2 << endl;

}
