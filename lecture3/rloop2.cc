#include <iostream>
using namespace std;

//  for( auto& x : arr ) x++;
//example of range-based for loop
//
//ex1
/*
int main()
{
  int arr[] = {20, 30, 40, 50};
  for( auto& x : arr ) x++;
  for( auto x : arr ) cout << x << " "; 
  cout << endl;
}
*/


//ex2

int main()
{
  int arr[] = {20, 30, 40, 50};
  cout << &arr[0] << endl;
  cout << &arr[1] << endl;
  cout << &arr[2] << endl;
  cout << &arr[3] << endl;
  cout << "*************" << endl;
  for( auto& x : arr ) {
    x++;
    cout << &x << endl; } 

  cout << "*************" << endl;

  for( auto x : arr ) {
    x++;
  cout << &x << endl; } 
  for( auto x : arr ) cout << x << " "; 
  cout << endl;
}





