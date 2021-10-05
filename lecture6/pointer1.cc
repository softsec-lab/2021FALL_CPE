#include <iostream>
using namespace std;

int main(){
  int a = 3;
  int b = 5;
  int *poi_1, *poi_2, *poi_3;

  poi_1 = &a;
  poi_2 = &b;

  poi_3 = poi_1;

  cout << "*poi_1: " << *poi_1 << endl;
  cout << "*poi_3: " << *poi_3 << endl;
  cout << "*poi_2: " << *poi_2 << endl;

  cout << "poi_1: " << poi_1 << endl;
  cout << "poi_3: " << poi_3 << endl;
  cout << "poi_2: " << poi_2 << endl;

  cout << "&poi_1: " << &poi_1 << endl;
  cout << "&poi_3: " << &poi_3 << endl;
  cout << "&poi_2: " << &poi_2 << endl;

  *poi_2 = *poi_1;
  cout << "***********************" << endl;

  cout << "*poi_1: " << *poi_1 << endl;
  cout << "*poi_3: " << *poi_3 << endl;
  cout << "*poi_2: " << *poi_2 << endl;

  cout << "poi_1: " << poi_1 << endl;
  cout << "poi_3: " << poi_3 << endl;
  cout << "poi_2: " << poi_2 << endl;

  cout << "&poi_1: " << &poi_1 << endl;
  cout << "&poi_3: " << &poi_3 << endl;
  cout << "&poi_2: " << &poi_2 << endl;

  return 0;
}
