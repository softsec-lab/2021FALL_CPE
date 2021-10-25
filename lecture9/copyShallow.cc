#include<iostream>
#include <cstring>
using namespace std;
 
class CPE
{
private:
    int studentNo;
    char *instructor;
public:
    CPE(int no, const char *name) { 
      cout << "In Normal Constructor" << endl;
      studentNo = no; 
      int size = strlen(name);
      instructor = new char[size+1];
      strcpy(instructor, name);
    }
 
    /*
    // Copy constructor : Shallow Copy
    CPE(const CPE &p1) { 
      cout << "In Copy Constructor" << endl;
      studentNo = p1.studentNo; 
      instructor = p1.instructor;
    }
    */

    
    // Copy constructor : Deep Copy
    CPE(const CPE &p1) { 
      cout << "In Copy Constructor" << endl;
      studentNo = p1.studentNo; 

      instructor = new char[strlen(p1.instructor)+1];
      strcpy(instructor, p1.instructor);
    }
    
 
    void changeIns(const char *name) {  
      strcpy(instructor, name);
    }

    int getStudentNo() {  return studentNo; }
    void getInsName() {  cout << instructor << endl; }
};
 
int main()
{
    // Normal constructor is called
    CPE obj1(52, "HSJ"); 

    // Copy constructor is called
    CPE obj2 = obj1; 

    obj1.getInsName();
    obj2.getInsName();

    obj1.changeIns("AAA");

    obj1.getInsName();
    obj2.getInsName();
 
    return 0;
}
