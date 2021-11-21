#include <iostream>
using namespace std;

template <class T>
class Parent{
  T val;
  public:
    Parent(T arg1) { val = arg1; }
    void print() { cout << val << endl; }
};

template <class Z>
class Child : public Parent<Z> {
  public:
    Child(Z a) : Parent<Z>(a){}
};

int main(){
  Child<int> obj1(10);
  Child<double> obj2(10.20);

  obj1.print();
  obj2.print();
  return 0;
}
