#include <iostream>

class Person
{
public:
  std::string Name;
  int Age;
  Person(std::string name, int age)
    : Name(name), Age(age) {}
};

int main()
{
  Person p("John Doe", 25);
  std::cout << "Hello " << p.Name << "!\n";
}