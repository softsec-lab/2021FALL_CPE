//Program to demonstrate cin and cout with strings
#include <iostream>
#include <string>
using namespace std;

void newLine(){
  char symbol;
  do{
    cin.get(symbol);
  }while(symbol != '\n');
}

int main( )
{
  string dogName;
  int actualAge;
  int humanAge;
  cout << "How many years old is your dog? ";
  cin >> actualAge; //5'\n'
  humanAge = actualAge * 7;
  cout << "What is your dog's name? ";
  // Is it enough?
  newLine();
  getline(cin, dogName); 
  cout << dogName << "'s age is approximately " <<
    "equivalent to a " << humanAge << " year old human."
    << endl;
  return 0;
}
