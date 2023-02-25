#include <iostream>
#include <deque>
#include <algorithm>

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
        os << rhs.name << " " << rhs.age << std::endl;
        return os;
   }



};

int main()
{
    //test_1();
    //test_2();
    //test_3();
    //test_4();
    test_5();
    //test_6();
    //test_7();
    //test_8();
    //test_9();
    return 0;
}

template <typename T>
void display(const T &container)
{
    for(const auto &mem: container)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
}
void test_1()
{
    std::deque<int> dec {1,2,3,4,5};
    display(dec);
}

void test_2() // initialize all deque elements
{
    std::deque<int> d1(10,100);
    display(d1);
}

void test_3()
{
    std::deque<std::string> stooges {
        std::string{"Larry"},
        "Moe",
        std::string{"Curly"}
    };
    display(stooges);
}

void test_4() //emplace front, emplace back
{
    Person person{"kaleb", 26};
    std::deque<Person> dvec {person};

    dvec.emplace_front("sam", 19);
    dvec.emplace_back("Elijah", 18);
    display(dvec);
}

void test_5() // push_front
{
    std::deque<int> vec1 {1,2,3,4,5,6,7,8,9};
    std::deque<int> vec2;

    for(const auto &mem: vec1)
    {
        vec2.push_front(mem);
    }
    display(vec2);
}

void test_6()
{
    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9};
    std::deque<int> dec1;

    std::copy(vec1.begin(), vec1.end(), std::front_inserter(dec1));
    display(dec1);
}


