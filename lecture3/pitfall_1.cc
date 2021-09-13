#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//2147483647 vs 2147483648 vs 2147483646
    cout << "test 1:" << ((int)pow(2, 31) - 1) << endl; //student code
	cout << "test 2:" << ((long)pow(2, 31) - 1) << endl;
	cout << "test 3:" << ((int)(pow(2, 31) - 1)) << endl;
 
	int a,b;
	cin >> a;
	cin >> b;
    if (a < 1 || a >((int)pow(2, 31) - 1) || b < 1 || b >((int)pow(2, 31) - 1))
    {
      cout << "Min: Max: Error: out of range";
    }
	return 0;
}
