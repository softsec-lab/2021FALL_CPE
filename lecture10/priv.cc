#include <iostream>
using namespace std;

class A{
  public:
    void test();
  private:
    void testP();
};

void A::test(){
  testP();
}

void A::testP(){
  cout << "private testP" << endl;
}

class B:public A {
  public:
    void testBP();
};

int main(){
  B b;
  b.test();
  return 0;
}
