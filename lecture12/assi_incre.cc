#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Money {
  public:
	Money( );
	Money(double amount);
	Money(int theDollars, int theCents);
	Money(int theDollars);
    int getDollars( ) const;
    void output( ) const;
    const Money& operator=(const Money& theMoney);
    Money operator++(); // preifx 
    
    // Make members public just for the example
    //private:
    int dollars;
    int cents;
    
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;
};

Money::Money( ): dollars(0), cents(0){}
Money::Money(double amount)
  : dollars(dollarsPart(amount)), cents(centsPart(amount))
{}

//Uses cstdlib:
 Money::Money(int theDollars, int theCents){
  if ((theDollars < 0 && theCents > 0) ||
    (theDollars > 0 && theCents < 0))
  {
    cout << "Inconsistent money data.\n";
    exit(1);
  }
  dollars = theDollars;
  cents = theCents;
}

Money::Money(int theD) : dollars(theD), cents(0){}

int Money::getDollars( ) const
{
  return dollars;
}

int Money::dollarsPart(double amount) const{
  return static_cast<int>(amount);
}

int Money::centsPart(double amount) const{
  double doubleCents = amount * 100;
  int intCents = (round(fabs(doubleCents))) % 100;
  if (amount < 0)
    intCents = -intCents;
  return intCents;
}

int Money::round(double number) const{
  return static_cast<int>(floor(number + 0.5));
}

void Money::output( ) const{
  int absDollars = abs(dollars);
  int absCents = abs(cents);
  if (dollars < 0 || cents < 0)
    cout << "$-";
  else
    cout << '$';
  cout << absDollars;

  if (absCents >= 10)
    cout << '.' << absCents;
  else
    cout << '.' << '0' << absCents;
  cout << endl;
}

const Money& Money::operator=(const Money& theMoney)
{
  // Just for example
  dollars = theMoney.getDollars() - 1;
  return *this; // Why should we return *this?
}

// Postfix version, not a member
Money operator++(Money& theMoney, int ignoreMe) {
  // We need range checks for cents. This is just for an example.
  int dollars = theMoney.dollars++, cents = theMoney.cents++;
  return Money(dollars, cents);
}

Money Money::operator++() {
  // We need range checks for cents. This is just for an example.
  return Money(++dollars, ++cents);
}

int main()
{
  Money amount(10);
  Money a = amount++; //copy constructor is called
  cout << "a is: ";
  a.output();
  cout << endl;
  cout << "amount is: ";
  amount.output();
  cout << endl;

  amount = Money(10);
  amount.output();
  a = ++amount;
  a.output();  
  amount.output();

  return 0;
}
