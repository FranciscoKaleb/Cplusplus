#include <iostream>
#include <list>
#include <algorithm>
#include <forward_list>

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
void test_8();
void test_9();

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
        os << rhs.name << " " << rhs.age;
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

template<typename T>
void display(const T &container)
{
    for(const auto &mem:container)
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
    test_4();
    //test_5();
    //test_6();
    //test_7();
    //test_8();
    //test_9();
    return 0;
}

void test_1() // size(), max_size(), front(), back()
{
    std::list<int> l {1,2,3,4,5};

    std::cout << l.size() << std::endl;
    std::cout << l.max_size() << std::endl;

    std::cout << l.front() << std::endl;
    std::cout << l.back() << std::endl;

}

void test_2() // push_back, push_front, emplace_back, emplace_front
{
    std::list<Person> l;
    Person p1 {"Larry", 23};

    l.push_back(p1);
    display(l);
    l.pop_back();
    display(l);

    l.push_front(Person{"Manny", 44});
    display(l);
    l.pop_front();
    display(l);

    l.emplace_back("Larry", 55);
    l.emplace_front(p1);
    display(l);
}

void test_3() //insert an element before an element// erase, resize
{
    std::list<int> l {1,2,3,4,5};
    auto it = std::find(l.begin(), l.end(), 3);

    display(l);

    l.insert(it, 10);
    display(l);

    l.erase(it);
    display(l);

    l.resize(2);
    display(l);

    l.resize(5);
    display(l);
}

void test_4() // forward list, back methods not available. // display_after(), emplace_after, erase_after
{
    std::forward_list<int> fl {1,2,3,4,5};

    display(fl);

    fl.push_front(100);
    display(fl);

    auto it = std::find(fl.begin(), fl.end(), 4);
    fl.insert_after(it, 44);
    display(fl);
    fl.emplace_after(it, 100);
    display(fl);
    fl.erase_after(it);
    display(fl);
}

void test_5()
{

}

void test_6()
{

}
