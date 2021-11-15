#include <iostream>
using namespace std;

class A{
  private:
    int num;
  public:
    A(): num(10){}
    friend void printNum(A);
    int getNum() {return num;}
};

void printNum(A a){
  cout << "num: " << a.num << endl;
}

void printNum2(A a){
  //cout << "num: " << a.num << endl;
  cout << "num: " << a.getNum() << endl;
}

int main(){
  A obj1;
  printNum(obj1);
  printNum2(obj1);
  return 0;
}


