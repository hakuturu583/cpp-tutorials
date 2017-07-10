#include <iostream>
#include <string>
#include "human.h"

int main()
{
  //create yamada instance
  human yamada = human(20,"yamada");
  //when you use access members through instance , use .
  yamada.print_properties();
  //create tanaka instance pointer
  human* tanaka = new human(20,"tanaka");
  //when you use access members through instance pointers, use ->
  tanaka->print_properties();
  return 0;
}
