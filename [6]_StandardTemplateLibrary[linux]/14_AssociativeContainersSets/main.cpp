#include <iostream>
#include <iomanip>
#include <set>
#include <unordered_set>
#include <vector>
#include <list>

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
void test_8();
void test_9();
void test_10();

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
        os << rhs.name << " " << rhs.age << std::endl;
        return os;
    }
    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
    bool operator<(const Person &rhs) const
    {
        return (this->age < rhs.age);
    }
};

template<typename T>
void display(std::set<T> &s)
{
    for(const auto &mem:s)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
}

template<typename C>
void display(std::multiset<C> &s)
{
    for(const auto &mem:s)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
}

template<typename D>
void display(std::unordered_multiset<D> &s)
{
    for(const auto &mem:s)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
}


int main()
{

    //test_1();
    //test_2();
    //test_3();
    //test_4();
    //test_5();
    test_6();
    return 0;
}

void test_1() //set, dont allow duplicate, sort automatically, no concept of front and back
{
    std::set<int> s {13,1,2,3,4,5,5};
    display(s);
    s = {6,7,8,9,10}; // you cant do this with vectors, list, .. / unique to set
    display(s);
    s.insert(21);
    display(s);
}

void test_2() //multiset, allow duplicate element,sort automatically, no concept of front and back
{
    std::multiset<int> s {13,1,2,3,4,5,5};
    display(s);
    s = {6,7,8,9,10}; // you cant do this with vectors, list, .. / unique to set
    display(s);
    s.insert(21);
    display(s);
}

void test_3() // unordered_multiset, unsorted, allow duplicate, no reverse iterator
{
    std::unordered_multiset<int> s {13,1,2,3,4,5,5};
    display(s);
    s = {6,7,8,9,10}; // you cant do this with vectors, list, .. / unique to set
    display(s);
    s.insert(21);
    display(s);
}

void test_4() //find, count algo
{
    std::multiset<int> s {13,1,2,3,4,5,5};
    display(s);
    auto it = s.find(5);
    if(it != s.end())
    {
        std::cout << "Found:" << *it << " ";
        std::cout << s.count(5) << " times" << std::endl;
    }
    s.clear();
    display(s);
}

void test_5() // sort by Person by age using < operator//deletes by age
{
    std::set<Person> stooges
    {
        {"Larry", 23},
        {"Kaleb", 21},
        {"Francis", 19}
    };
    display(stooges);
    auto it = stooges.find(Person("jjj", 21));
    if(it != stooges.end())
        stooges.erase(it);
    display(stooges);
}

void test_6() // it.second // it.first
{
    std::set<std::string> s {"A","B","C"};
    display(s);

    std::cout << std::boolalpha;
    auto it = s.insert("A");
    if(it.second == false)
    {
        std::cout << *(it.first) << " already exist in the set. Duplicate no allowed" << std::endl;
    }
    else{
        std::cout << *(it.first) << " added" << std::endl;
    }
}

