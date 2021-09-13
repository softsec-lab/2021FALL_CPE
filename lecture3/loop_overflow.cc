#include <iostream>
using namespace std;

int main(){
  int min, max;
  cin >> min;
  cin >> max;

  //1~2147483647 ex3
  for (;min <= max; min++){
    cout << min << endl;
  }

  return 0;
}
