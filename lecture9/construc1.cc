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

DayOfYear::DayOfYear(int monthValue, int dayValue)
{
  cout << "In the constructor DayOfYear(" << monthValue;
  cout << "," << dayValue << ")" << endl;
  month = monthValue;
  day = dayValue;
}

void DayOfYear::output(){
   cout << "day of ouput function" << endl;
   cout << month << endl;
}

int main()
{
  DayOfYear obj1(5, 10);
  DayOfYear* obj2 = new DayOfYear(2, 2);

  cout << "obj1: " << &obj1 << endl;
  cout << "obj2: " << obj2 << endl;

  while(1){

  }

  return 0;

}

