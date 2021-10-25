#include <iostream>
using namespace std;


class DayOfYear
{
  public:
    DayOfYear() {month = 1; day = 1;}
    DayOfYear(int, int);
    ~DayOfYear();

  private:
    int month;
    int day;
};

DayOfYear::DayOfYear(int a, int b)
{
  cout << "constructing " << endl;
  month = a;
  day = b;
}

DayOfYear::~DayOfYear()
{
  cout << "destructing " << endl;
}

void test(){
  cout << "in test" << endl;
}

int main(){
  cout << "object is created" << endl;
  DayOfYear a(5,5);
  return 0; 
}
