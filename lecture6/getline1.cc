#include <iostream>
using namespace std;

int main(){
  char shortString[5];
  cout << "Enter some input:\n";
  //abcd vs abcds vs a b c
  cin.getline(shortString, 5);
  cout << shortString << "END OF OUTPUT\n";
  return 0;
}
