#include <iostream>
using namespace std;

class IntCount{
   int count;
public:
   IntCount() { count = 0; }
   int getCount() { return count; }
   void setCount(int val) { count = val; }
};

class DoubleCount{
   double count;
public:
   DoubleCount() { count = 0; }
   double getCount() { return count; }
   void setCount(double val) { count = val; }
};

//template <typename T>
template <class T>
class Counter{
   T count;
public:
   Counter() { count = 0; }
   T getCount() { return count; }
   void setCount(T val) { count = val; }
};

template <class V>
using PairOfNums = Counter<V>;

int main(){
  PairOfNums<int> intCnt2;
  intCnt2.setCount(30);
  cout << intCnt2.getCount() << endl;

  PairOfNums<double> intCnt5;
  intCnt5.setCount(30.50);
  cout << intCnt5.getCount() << endl;
  return 0;
}
