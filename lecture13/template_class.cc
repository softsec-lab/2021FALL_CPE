#include <iostream>
using namespace std;

#if 0
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

class CharCount{
   char count;
public:
   CharCount() { count = 0; }
   char getCount() { return count; }
   void setCount(char val) { count = val; }
};

#endif

//template <typename T>
template <class T>
class Counter{
   T count;
public:
   Counter() { count = 0; }
   T getCount() { return count; }
   void setCount(T val) { count = val; }
};

int main(){
  Counter <int> intCnt;
  Counter <double> doubleCnt;
  Counter <char> charCnt;
  return 0;
}
