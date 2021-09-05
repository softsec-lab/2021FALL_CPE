#include <iostream>
using namespace std;

int main(){
  size_t int_size = sizeof(int);
  size_t u_int_size = sizeof(unsigned int);
  size_t short_size = sizeof(short);
  size_t u_short_size = sizeof(unsigned short);

  // use 'z' for a length specifier in C
  // printf("%zd %zd %zd\n", int_size, double_size, float_size);
  cout << "* int size: " << int_size << endl;
  cout << "* (unsigned) int size: " << u_int_size << endl;
  cout << "* short size: " << short_size << endl;
  cout << "* (unsigend) short size: " << u_short_size << endl;

  return 0;
}
