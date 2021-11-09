#include <iostream>
using namespace std;

class A {
public:
	virtual void print() {
		cout << "A print" << endl;
	}
};

class B : public A {
public:
	void print() override {
		cout << "B print" << endl;
	}
};

void test(A& arg1){
  //Polymorphism
  arg1.print();
}


int main()
{
	A a;
	B b;
    test(a);
    test(b);
	cout << "No Compiler Error" << endl;
	return 0;
}

