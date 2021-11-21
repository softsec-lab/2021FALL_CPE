#include <iostream>
using namespace std;

template<class T>
void swapValues(T& variable1, T& variable2){
  T temp;

  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

int main(){
  int integer1=1, integer2=2;
  cout << "Original integers " << integer1 << " " << integer2 << endl;

  swapValues(integer1, integer2);
  cout << "Swapped integers " << integer1 << " " << integer2 << endl;

  char char1='A', char2='B';
  cout << "Original chars " << char1 << " " << char2 << endl;

  swapValues(char1, char2);
  cout << "Swapped chars " << char1 << " " << char2 << endl;
  
  int a[5] = {1,2,3,4,5};
  int b[5] = {6,7,8,9,10};

  cout << "Original arrays " << a << " " << b << endl;

  swapValues(a, b);
  cout << "Swapped arrays " << a << " " << b << endl;
  
  return 0;
}
