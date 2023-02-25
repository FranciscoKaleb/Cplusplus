#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>

class Person
{
private:
    std::string name;
    int age;
public:
    Person();
    Person(std::string name, int age)
    :name{name}, age{age}
    {

    }
    ~Person(){};
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs)
    {
        os << std::setw(15) << std::left << rhs.name
           << std::setw(15) << std::left << rhs.age << std::endl;
    }
    bool operator<(const Person &rhs)
    {
        return (this->age < rhs.age);
    }
    bool operator==(const Person &rhs)
    {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

template<typename T1, typename T2>
void display(std::map<T1,T2> &container)
{
    for(const auto &mem:container)
    {
        std::cout << mem;
    }
}

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
void test_8();

int main(int argc, char **argv)
{
    //no concept of front and back
    //map<key, value>  pair

    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();
    test_8();
    return 0;
}

void test_1()
{
    std::cout << "===============Test 1===============" << std::endl;

    std::cout << "===============Test 1===============" << std::endl;
}
void test_2()
{
    std::cout << "===============Test 2===============" << std::endl;

    std::cout << "===============Test 2===============" << std::endl;
}
void test_3()
{
    std::cout << "===============Test 3===============" << std::endl;

    std::cout << "===============Test 3===============" << std::endl;
}
void test_4()
{
    std::cout << "===============Test 4===============" << std::endl;

    std::cout << "===============Test 4===============" << std::endl;
}
void test_5()
{
    std::cout << "===============Test 5===============" << std::endl;

    std::cout << "===============Test 5===============" << std::endl;
}
void test_6()
{
    std::cout << "===============Test 6===============" << std::endl;

    std::cout << "===============Test 6===============" << std::endl;
}
void test_7()
{
    std::cout << "===============Test 7===============" << std::endl;

    std::cout << "===============Test 7===============" << std::endl;
}
void test_8()
{
    std::cout << "===============Test 8===============" << std::endl;

    std::cout << "===============Test 8===============" << std::endl;
}