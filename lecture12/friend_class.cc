#include <iostream>
using namespace std;

class A{
  private:
    int num;
  public:
    A(): num(10){}
    friend class B;
};

class B{
  public:
    void printNum(A a){
      cout << "num: " << a.num << endl;
    }
};

/*
void printNum2(A a){
  cout << "num: " << a.num << endl;
}
*/

int main(){
  A obj1;
  B obj2;
  obj2.printNum(obj1);
  return 0;
}


