#include <iostream>
using namespace std;

#if 0
int main(){
  enum MODE { WEAPON, EQUIPMENT, GEM = 10,  DEFENSE};
  int x = WEAPON + 10;
  cout << "x: " << x << endl;
}
#endif

#if 1
int main(){
  //scope problem
  //enum x {Error, OK};
  //enum y {Error, Ok};
  
  enum class IOResult {Error, Ok};
  enum class ParseResult {Error, Ok};
 
  IOResult io_return_code = IOResult::Ok;

  switch(io_return_code) {
    case IOResult::Ok:
//    case 1:
      cout << "IO done" << endl; break;
    case IOResult::Error:
      cout << "IO Error" << endl;
  }
}
#endif
