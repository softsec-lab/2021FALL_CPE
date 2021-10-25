#include <iostream>
using namespace std;

class DayOfYear 
{
  public:
    DayOfYear(int, int);
    DayOfYear();
    void output();
  private:
    int month = 1;
    int day = 1;
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  if ((month < 1) || (month > 12)){
    cout << "Illegal month value!" << endl;
    exit(1);
  }
  if ((day < 1) || (day > 31)){
    cout << "Illegal day value!" << endl;
    exit(1);
  }
}

void DayOfYear::output(){
  cout << "Month: " << month << " Day:" << day << endl;
}

int main(){
  DayOfYear christmas(0,-13);
  christmas.output();
  return 0;
}
