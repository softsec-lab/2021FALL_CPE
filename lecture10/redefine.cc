#include <iostream>
#include <string>
using namespace std;

class Person 
{
  public:
    Person() : name("not set") {}
    Person(string name) : name(name) {}
    string getName(string name) const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

class Student : public Person
{
  public:
    Student(string name) : Person(name) {}
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
    void printInfo(); // const is dropped for demo
  private:
    int sid;
};

void Student::printInfo(){
  Person::printInfo();
  cout << "Student ID: " << sid << endl;
}

int main(){
  Student st1("Jason");
  st1.setSid(10);
  st1.printInfo();
  cout << "==========" << endl;
  st1.Person::printInfo();

  return 0;
}

