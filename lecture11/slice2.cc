#include <iostream>
using namespace std;

class Pet
{
  public:
    string name;
    virtual void print() const {cout << "Pet Class: " << name << endl;}
    Pet() {name = "pet"; }
};

class Dog : public Pet 
{
  public:
    Dog(){breed = "Great Dame";}
    string breed;
    virtual void print() const{cout << "Dog Class: " << breed << endl;}
};

int main()
{
  Pet* ppet;
  Dog* pdog;
  pdog = new Dog;
  pdog->name = "Tiny";
  pdog->breed = "Great Dane";
  ppet = pdog;

  // Cannot access breed field of object pointed to by ppet:
  //cout << ppet->breed;	// ILLEGAL!
  ppet->print();
  
  /*
  Pet p;
  Dog d;
  d.name = "Jason";
  d.breed = "Jack";
  p = d;
  p.print();
  */
  return 0;
}
