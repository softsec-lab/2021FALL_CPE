#include <iostream>
using namespace std;

template <class T>
class Parent{
  T val;
  public:
    Parent(T arg1) { val = arg1; }
    void print() { cout << val << endl; }
};

class Child : public Parent<int> {
  public:
    Child(int a) : Parent<int>(a){}
};

int main(){
  Child obj1(10);
  obj1.print();
  return 0;
}
