#include <iostream>
using namespace std;

class Money
{
  public:
    Money(int d, int c);
    int getDollars() const;
    int getCents() const;
    const Money operator-();
    void operator()(int d);
    void operator()(int d, int c);
  private:
    int dollars;
    int cents;
};

Money::Money(int d, int c){
  dollars = d;
  cents = c;
}

int Money::getDollars() const {
  return dollars;
}

int Money::getCents() const {
  return cents;
}

const Money Money::operator-()
{
  return Money(-dollars, -cents);
}

void Money::operator()(int theDollars) { 
  dollars = theDollars; 
}

void Money::operator()(int theDollars, int theCents) {
  dollars = theDollars;  cents = theCents;
}

int main(){
  Money m1(10, 9);
  cout << "doller: " << m1.getDollars() << " cents: " << m1.getCents() << endl;
  Money m2 = -m1;
  cout << "doller: " << m2.getDollars() << " cents: " << m2.getCents() << endl;

  m1(20);
  cout << "doller: " << m1.getDollars() << " cents: " << m1.getCents() << endl;

  m2(5,50);
  cout << "doller: " << m2.getDollars() << " cents: " << m2.getCents() << endl;
  return 0;
}
