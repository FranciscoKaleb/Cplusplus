#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

class Person
{
  friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
  std::string name;
  int age;
public:
  Person(std::string name, int age)
  :name{name}, age{age}
  {

  };
  Person(const Person &p)
  :name{p.name}, age{p.age}
  {

  };
  ~Person() = default;
  std::string get_name() const
  {
      return name;
  }
  void set_name(std::string name)
  {
      this->name = name;
  }
  int get_age()
  {
      return age;
  }
  void set_age(int age)
  {
      this->age = age;
  }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << "[Person: " << rhs.name << " : " << rhs.age << "]";
    return os;
}

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();

int main()
{
    test_1();
    return 0;
}

void test_1()
{
    std::cout << "\n---test1------------------------" << std::endl;
    [] () {std::cout << "Hi" << std::endl;}();

    [] (int x) {std::cout << x << std::endl;}(100);

    [] (int x, int y) {std::cout << x << " " << y << std::endl;}(100,200);
}

void test_2()
{

}

void test_3()
{

}

void test_4()
{

}

void test_5()
{

}

void test_6()
{

}

void test_7()
{

}


