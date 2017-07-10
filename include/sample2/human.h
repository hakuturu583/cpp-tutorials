#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
#include <string>

class human
{
//public members can access anywhere
public:
  //constructor
  human(int age,std::string name);
  //destructor
  ~human();
  void print_properties();
  virtual void reply();
//private members can be accessed through instance
private:
  std::string name;
  int age;
};

#endif
