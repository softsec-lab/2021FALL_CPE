#include <iostream>
using namespace std;

class DayOfYear
{
  public:
    
    DayOfYear() {
      cout << "1 In the constructor DayOfYear" << endl;
      month = 1;
      day = 1;
    }

    DayOfYear(int, int);

    void output();
  private:
    int month;
    int day;
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "2 In the constructor DayOfYear" << endl;
}


void DayOfYear::output(){
  cout << "Month: " << month << " Day:" << day << endl;
}

int main(){
  DayOfYear obj1;
  DayOfYear obj2(2,3);
  obj1.output();
  //obj2.output();
}
