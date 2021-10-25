#include <iostream>
using namespace std;

class DayOfYear 
{
  public:
    DayOfYear(int, int);
    void output(); 
  private:
    int month = 1;
    int day = 1;
};

#if 0
DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "In the constructor DayOfYear(" << monthValue;
  cout << "," << dayValue << ")" << endl;
  month = monthValue;
  day = dayValue;
}
#endif

#if 0
DayOfYear::DayOfYear(int month, int day)
  : month(month), day(day)
{
  cout << "In the constructor2 DayOfYear(" << month;
  cout << "," << day << ")" << endl;
  cout << "this->month: " << this->month << endl; 
  cout << "month: " << month << endl; 
}
#endif

#if 1
DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(12), day(5)
{
  month = monthValue;
}
#endif

void DayOfYear::output(){
  cout << "month: " << month << " day: " << day << endl;
}

int main(){
  DayOfYear christmas(12,25);
  // What is the result? What does it mean?
  christmas.output();
  return 0;
}
