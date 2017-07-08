#include <iostream>

//prototype definition of same name function
//but its args are not same
void print_line(std::string line);
void print_line(int line);
template <typename T> void print_line_using_template(T line);

int main()
{
  // << and >> is stream
  //std::cout output "hello! world! to standard output"
  //std::endl change lines
  //std:: is namespace it. std:: is standard namespace
  //if you use using namespace std, you can write same code in this way.
  //cout << "hello! world!" << endl;
  std::cout << "hello! world!" << std::endl;
  print_line("hello! world!");
  print_line(1);
  print_line_using_template("hello! world!");
  print_line_using_template(1);
}

//process of void print_line(args); functions
void print_line(std::string line)
{
  std::cout << line << std::endl;
}

void print_line(int line)
{
  std::cout << line << std::endl;
}

//process of void print_line_using_template(args); functions
template <typename T> void print_line_using_template(T line)
{
 std::cout << line << std::endl;
}
