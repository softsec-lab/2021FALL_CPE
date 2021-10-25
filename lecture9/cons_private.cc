#include <iostream>
using namespace std;

class DayOfYear
{
  public:
    DayOfYear(int, int) {}
    void output();

  private:
    // We cannot call private constructors
    DayOfYear(int, double) {}
    DayOfYear(double, int) {}
    DayOfYear(double, double) {}

    int month;
    int day;
};

int main(){
  DayOfYear a(5.5, 5);
  //DayOfYear s(5, 5);
  return 0;
}
