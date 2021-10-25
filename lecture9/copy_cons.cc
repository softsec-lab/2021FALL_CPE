#include<iostream>
using namespace std;
 
class CPE
{
private:
    int studentNo;
public:
    CPE(int no) { 
      cout << "In Normal Constructor" << endl;
      studentNo = no; 
    }
 
    // Copy constructor
    CPE(const CPE &p1) { 
      cout << "In Copy Constructor" << endl;
      studentNo = p1.studentNo; 
    }
 
    int getStudentNo() {  return studentNo; }
};
 
int main()
{
    // Normal constructor is called
    CPE obj1(52); 

    // Copy constructor is called
    CPE obj2 = obj1; 
 
    cout << "obj1 student No: " << obj1.getStudentNo() << endl;
    cout << "obj2 student No: " << obj2.getStudentNo() << endl;
 
    return 0;
}
