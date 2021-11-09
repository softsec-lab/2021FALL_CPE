#include <iostream>
using namespace std;

class sale{
  public:
  virtual void print(){
    cout << "Sale" << endl;
  }
};

class discountSale : public sale{
  public:
  virtual void print(){
    cout << "Discount Sale" << endl;
  }
};

class onlineSale : public sale{
  public:
  virtual void print(){
    cout << "Online Sale" << endl;
  }
};

void test(sale& arg1){
  //Polymorphism 
  arg1.print();
}

int main(){
  sale s;
  discountSale ds;
  onlineSale os;

  test(s);
  test(ds);
  test(os);
  return 0;
}
