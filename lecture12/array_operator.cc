#include <iostream>
using namespace std;

class CharPair{
  public:
    CharPair(){}
    CharPair(int first_val, int second_val) : first(first_val), second(second_val) {}
    char& operator[](int index);
  private:
    char first;
    char second;
};

int main(){
  CharPair a;
  a[1] = 'A';
  a[2] = 'B';
  cout << a[1] << " " << a[2] << endl;
}

char& CharPair::operator[](int index)
{
  if(index == 1)
    return first;
  else if(index == 2)
    return second;
  else
    cout << "Illegal index value" << endl;
    exit(1);
}
