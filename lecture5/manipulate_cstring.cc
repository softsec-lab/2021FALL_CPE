#include <iostream>
using namespace std;

int main(){
  char a[3] = "aa"; 
  char happyString[7] = "DoBeDo";
  char b[3] = "bb"; 
  
  cout << "Before happyString: " << happyString << endl;
  cout << "Before a: " << a << endl;
  cout << "Before b: " << b << endl;
  happyString[6] = 'Z'; //overwrite \0
  cout << "After happyString:" << happyString << endl;
  cout << "Before a:" << a << endl;
  cout << "Before b:" << b << endl;
  return 0;
}
