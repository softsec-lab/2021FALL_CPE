#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Class for amounts of money in U.S. currency
class Money
{
public:
	Money( );
	Money(double amount);
	Money(int theDollars, int theCents);
	Money(int theDollars);
    double getAmount( ) const;
	int getDollars( ) const;
	int getCents( ) const;
    //const Money operator +(const Money& amount2);
    friend const Money operator +(const Money& amount1, const Money& amount2);
	friend ostream& operator<<(ostream& outputStream,
						const Money& amount);
	friend istream& operator>>(istream& inputStream,
						Money& amount);
    private:
	int dollars, cents;
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;
};

Money::Money( ): dollars(0), cents(0){}
Money::Money(double amount)
  : dollars(dollarsPart(amount)), cents(centsPart(amount))
{}

Money::Money(int d_val) : dollars(d_val), cents(0){}

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

double Money::getAmount( ) const
{
   return (dollars + cents*0.01);
}

int Money::getCents( ) const
{
   return cents;
}

int Money::getDollars( ) const
{
  return dollars;
}

const Money operator +(const Money& amount1, const Money& amount2){
  int allCents1 = amount1.cents + amount1.dollars*100; 
  int allCents2 = amount2.cents + amount2.dollars*100; 
  int sumAllCents = allCents1 + allCents2;
  int absAllCents = abs(sumAllCents); //Money can be negative.
  int finalDollars = absAllCents / 100;
  int finalCents = absAllCents % 100;
  if (sumAllCents < 0)
  {
     finalDollars = -finalDollars;
     finalCents = -finalCents;
  }
  return Money(finalDollars, finalCents);
}


/*
const Money Money::operator +(const Money& amount2){
  int allCents1 = cents + dollars*100; 
  int allCents2 = amount2.getCents( ) + amount2.getDollars( )*100; 
  int sumAllCents = allCents1 + allCents2;
  int absAllCents = abs(sumAllCents); //Money can be negative.
  int finalDollars = absAllCents / 100;
  int finalCents = absAllCents % 100;
  if (sumAllCents < 0)
  {
     finalDollars = -finalDollars;
     finalCents = -finalCents;
  }
  return Money(finalDollars, finalCents);
}
*/

/*
const Money operator +(const Money& amount1, const Money& amount2){
  int allCents1 = amount1.getCents( ) + amount1.getDollars( )*100; 
  int allCents2 = amount2.getCents( ) + amount2.getDollars( )*100; 
  int sumAllCents = allCents1 + allCents2;
  int absAllCents = abs(sumAllCents); //Money can be negative.
  int finalDollars = absAllCents / 100;
  int finalCents = absAllCents % 100;
  if (sumAllCents < 0)
  {
     finalDollars = -finalDollars;
     finalCents = -finalCents;
  }
  return Money(finalDollars, finalCents);
}
*/

int main()
{
    Money baseAmount(100,60), fullAmount;
    fullAmount = baseAmount + 25;
    cout << fullAmount << endl;

    fullAmount = 30 + baseAmount;
    cout << fullAmount << endl;

	return 0;
}

ostream& operator<<(ostream& outputStream, const Money& amount)
{
	int absDollars = abs(amount.dollars);
	int absCents = abs(amount.cents);
	if (amount.dollars < 0 || amount.cents < 0)
	//accounts for dollars == 0 or cents == 0
	outputStream << "$-";
	else outputStream << '$';
	outputStream << absDollars;
	if (absCents >= 10)
	outputStream << '.' << absCents;
	else outputStream << '.' << '0' << absCents;

	return outputStream;
}

istream& operator >>(istream& inputStream, Money& amount)
{
	char dollarSign;
	inputStream >> dollarSign; //hopefully
	if (dollarSign != '$')
	{
		cout << "No dollar sign in Money input.\n";
		exit(1);
	}
	double amountAsDouble;
	inputStream >> amountAsDouble;
	amount.dollars = amount.dollarsPart(amountAsDouble);
	amount.cents = amount.centsPart(amountAsDouble);

	return inputStream;
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

const Money operator -(const Money& amount){
  return Money(-amount.getDollars( ), -amount.getCents( ));
}

bool operator ==(const Money& amount1, const Money& amount2)
{
  return ((amount1.getDollars( ) == amount2.getDollars( ))
      && (amount1.getCents( ) == amount2.getCents( )));
}

const Money operator -(const Money& amount1, const Money& amount2){
  int allCents1 = amount1.getCents( ) + amount1.getDollars( )*100; 
  int allCents2 = amount2.getCents( ) + amount2.getDollars( )*100; 
  int diffAllCents = allCents1 - allCents2;
  int absAllCents = abs(diffAllCents); //Money can be negative.
  int finalDollars = absAllCents / 100;
  int finalCents = absAllCents % 100;
  if (diffAllCents < 0)
  {
     finalDollars = -finalDollars;
     finalCents = -finalCents;
  }
  return Money(finalDollars, finalCents);
}
