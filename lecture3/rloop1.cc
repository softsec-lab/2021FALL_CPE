#include <iostream>
using namespace std;

//example of range-based for loop
int main()
{
  //ex1
  /*
  int arr[] = {20, 30, 40, 50};

  for( auto x : arr ) // beautiful :)
    cout << x << " ";
  cout << endl;

  
  for(int i=0; i<sizeof(arr)/sizeof(int); i++) // messy :(
    cout << arr[i] << " ";
  cout << endl;
 */ 
  
  //ex2
  char* str = "abcd";
  for( auto c : str)
    cout << c << endl;
    
}
