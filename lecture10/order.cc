#include <iostream>
using namespace std;

class Person 
{
  public:
    Person() : name("not set") { cout << "Person: default constructor is called" << endl; }
    Person(string name) : name(name) { cout << "Person(string): default constructor is called" << endl; }
    string getName(string name) const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

class Student : public Person{
  public:
    Student() : Person(), sid(0) { cout << "Student: default constructor is called" << endl; }
    Student(int sid) : Person(), sid(sid) { cout << "Student(int): constructor is called" << endl;}
    Student(string name, int sid) : Person(name), sid(sid) { cout << "Person(string,int): constructor is called" << endl; }
    void setSid(int sid) {this->sid = sid;}
  private:
    int sid;
};


int main(){
  Student st1;
  Student st2(10);
  Student st3("Jack", 20);
  return 0;
}
