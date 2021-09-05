#include <iostream>
using namespace std;

int main(){
  enum MODE { WEAPON, EQUIPMENT, GEM = 10,  DEFENSE};
  cout << "WEAPON " << WEAPON << endl;
  cout << "EQUIPMENT " << EQUIPMENT << endl;
  cout << "GEM " << GEM << endl;
  cout << "DEFENSE " << DEFENSE << endl;
}
