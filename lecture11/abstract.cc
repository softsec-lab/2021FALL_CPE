#include <iostream>
using namespace std;

class Pet{
  public:
    string name;
    virtual void print() const = 0;
};

class Dog : public Pet{
  public:
    string breed;
    void print() const override final;
};

void Dog::print() const{
  cout << "breed: " << breed << endl;
}

int main(){
  Dog dog;
  //Pet pet;

  dog.name = "Tiny";
  dog.breed = "Great Dane";

  dog.print();

  return 0;
}
