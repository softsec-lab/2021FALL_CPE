#include <iostream>
using namespace std;

int main(){
  char a[80], b[80];
  cout << "Enter some input: ";
  //Do be do to you

#if 0
  cin >> a;
  cout << a << "END OF OUTPUT\n";
#endif

#if 1
  cin >> a >> b;
  cout << a << " " << b << "END OF OUTPUT\n";
#endif
  return 0;
}
