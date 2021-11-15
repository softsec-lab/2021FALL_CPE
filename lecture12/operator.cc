#include <iostream>
using namespace std;

class Money
{
  public:
    Money(int d, int c);
    int getDollars() const;
    int getCents() const;
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

const Money operator-(const Money& amount)
{
  return Money(-amount.getDollars(), -amount.getCents());
}

/*
const Money operator^^(const Money& amount)
{
  return Money(-amount.getDollars(), -amount.getCents());
}
*/

/*
// What happens with the following code?
//3 + 5 = 8;
//3 + 5 = 15;
const int operator+(const int num1, const int num2)
{
  return num1 * num2;
}
*/

int main(){
  Money m1(10, 9);
  cout << "doller: " << m1.getDollars() << " cents: " << m1.getCents() << endl;
  Money m2 = -m1;
  cout << "doller: " << m2.getDollars() << " cents: " << m2.getCents() << endl;
  return 0;
}
