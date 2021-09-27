#include <iostream>

using namespace std;

int main()
{
  // Following code has errors
  /*
  char a[] = "Hi";
  a[0]='H', a[1]='i', a[2] ='\0' 
*/

  char name1[5] = {'T', 'z', 'u', 'y', 'u'};
  char name2[4] = {'S', 'a', 'n', 'a'};
  char name3[6] = {'D', 'a', 'h', 'y', 'u', 'n'};

  cout << name1 << endl;
  cout << name2 << endl;
  cout << name3 << endl;
}
