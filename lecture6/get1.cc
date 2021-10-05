#include <iostream>
using namespace std;

int main(){
#if 0
  char c1, c2, c3, c4;
  cin.get(c1);
  cin.get(c2);
  cin.get(c3);
  cin.get(c4);
  cout << "Output: " << c1 << c2 << c3 << endl;
#endif 

#if 1
  cout << "Enter a line of input and I will echo it:\n";
  char symbol;
  do{
      cin.get(symbol);
      cout << symbol;
    } while (symbol != '\n');
  cout << "That's all for this demonstration.\n";
#endif
  return 0;
}
