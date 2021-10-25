#include <iostream>
using namespace std;

class DayOfYear
{
  public:
    DayOfYear(int monthValue, int dayValue)
      //: month(2), day(2) //2nd
    {
      //3rd
      //month = monthValue;
      //day = dayValue;
    }
    void output(){ cout << month << "," << day << endl; }

  private:
    int month = 1;
    int day = 1;
};

int main()
{
  DayOfYear obj1(5, 10);
  obj1.output();
}

