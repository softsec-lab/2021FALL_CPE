#include <iostream>
using namespace std;

class A{
  public:
    virtual void printv(){
      cout << "A class printv func is called" << endl;
    }

    void print(){
      cout << "A class print func is called" << endl;
    }
};

class B : public A{
  public:
    virtual void printv(){
      cout << "B class printv func is called" << endl;
    }

    void print(){
      cout << "B class print func is called" << endl;
    }
};

int main(){
  A* ptrA;
  B objB;
  ptrA = &objB;

  ptrA->print();
  ptrA->printv();
  return 0;
}
