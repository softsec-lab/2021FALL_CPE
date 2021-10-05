#include <iostream>

using namespace std;

int main()
{
#if 1
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
#endif

  double price = 78.5909309283;
  cout << "The price is $" << price << endl;

  return 0;
}
