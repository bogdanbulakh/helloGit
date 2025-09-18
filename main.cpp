#include <iostream>

class Person
{
public:
  std::string Name;
  int Age;
};

int main()
{
  Person p;
  p.Name = "John Doe";
  p.Age = 25;
  std::cout << "Hello " << p.Name << "!\n";
}