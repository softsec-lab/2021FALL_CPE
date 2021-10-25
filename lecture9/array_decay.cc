#include<iostream>
using namespace std;

void decayFunc(int *p)
{
	cout << "Size in decayFunc : ";
	cout << sizeof(p) << endl;
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};

	cout << "Actual size: ";
	cout << sizeof(a) <<endl;

	decayFunc(a);

	return 0;
}

