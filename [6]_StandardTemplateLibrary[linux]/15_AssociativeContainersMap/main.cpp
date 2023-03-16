#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <set>

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
           return os;
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
        std::cout << mem.first << ":" << mem.second << std::endl;
    }
}

void display(std::map<std::string, std::set<int>> &container)
{
    for(const auto &mem: container)
    {
        std::cout << mem.first << ":";
        for(const auto &sm: mem.second)
        {
            std::cout << sm << " ";
        }
        std::cout << "\n";
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
    // no concept of front and back
    // map<key, value>  pair
    // ordered by key
    // no duplicate elements allowed
    // direct element access by key
    // iterators available
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

void test_1() //insert , iterator, find, clear
{
    std::cout << "===============Test 1===============" << std::endl;
    std::map<std::string,int> m {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m);

    m.insert(std::pair<std::string,int>("Anna",10));
    std::cout << "\n";
    display(m);

    m.insert(std::make_pair("Joe",5));
    std::cout << "\n";
    display(m);

    std::cout << "\n";
    m["Frank"] = 18;
    display(m);

    std::cout << "\n";
    m["Frank"] += 10;
    display(m);

    std::cout << "\n";
    m.erase("Frank");
    display(m);

    std::cout << "Count for Joe: " << m.count("Joe") << std::endl;
    std::cout << "Count for Frank: " << m.count("Frank") << std::endl;

    auto it = m.find("Larry");
    if(it != m.end())
    {
        std::cout << "Found: " << it->first << ":" << it->second << std::endl;
    }
    m.clear();
    display(m);

    std::cout << "===============Test 1===============" << std::endl;
}
void test_2()
{
    std::cout << "===============Test 2===============" << std::endl;

    std::map<std::string, std::set<int>> grades {
        {"Larry", {100,90}},
        {"Moe", {94}},
        {"Curly", {80,90,100}}
    };

    display(grades);

    grades["Larry"].insert(95);
    std::cout << "\n";
    display(grades);

    auto it = grades.find("Moe");
    if(it != grades.end())
    {
        it->second.insert(1000); //used different syntax because the "value" is a set
    }
    std::cout << "\n";
    display(grades);

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