#include <iostream>
#include <cstdlib> //for exit

using namespace std;

class DayOfYear
{
public:
	// initializes the month and day to arguments
	DayOfYear(int monthValue, int dayValue);

	// initializes the date to the first of the given month
	DayOfYear(int monthValue);
	
	// initializes the date to January 1
    DayOfYear();

	void output();
private:
	int month;
	int day;
    void testDate();
};

void DayOfYear::output(){
   cout << "Month: " << month << " Day:" << day << endl;
}

DayOfYear::DayOfYear( int monthValue, int dayValue )
	: month(monthValue), day(dayValue)
{
	testDate();
}

DayOfYear::DayOfYear( int monthValue )
   : month(monthValue), day(1)
{
	testDate();
}
DayOfYear::DayOfYear() : month(1), day(1)
{}

void DayOfYear::testDate(){
	if((month < 1) || (month > 12)){
      cout << "Illegal month value!\n";
      exit(1);
	}
	if((day < 1) || (day > 31)){
      cout << "Illegal day value!\n";
      exit(1);
	}
}

int main()
{
	DayOfYear date1(2, 21), date2(5), date3;

	cout << "Initialized dates:\n";
	date1.output(); cout << endl;
	date2.output(); cout << endl;
	date3.output(); cout << endl;

	return 0;
}
