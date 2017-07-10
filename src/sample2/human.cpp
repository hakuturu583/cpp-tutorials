#include <iostream>
#include "human.h"

human::human(int age,std::string name)
{
  //this is pointer of this instance
  this->age = age;
  this->name = name;
}

human::~human()
{

}

void human::print_properties()
{
  std::cout << "age = " << age << std::endl;
  using namespace std;
  cout << "name = " << name << endl;
}

void human::reply()
{
  std::cout << "hi" << std::endl;
}
