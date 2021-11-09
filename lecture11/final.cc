#include <iostream>
using namespace std;

class A {
public:
	virtual void print() final  {
		cout << "A print" << endl;
	}
    void test() final {}
};

class B : public A {
public:
	void print() {
		cout << "B print" << endl;
	}
};

int main()
{
	A a;
	B b;
	cout << "No Compiler Error" << endl;
	return 0;
}

