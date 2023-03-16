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

    }
    Person(const Person &p)
    :name{p.name}, age{p.age}
    {

    }
    ~Person() = default;
    std::string get_name()
    {
        return name;
    }
    void set_name(std::string n)
    {
        this->name = n;
    }
    int get_age()
    {
        return age;
    }
    void set_age(int a)
    {
        this->age = a;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << "[Person: " << rhs.name << " " << rhs.age << "]" << std::endl;
    return os;
}

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
void filter_vector(std::vector<int> &vec,std::function<bool(int)> func);


int main()
{
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();

    std::cout << "Hello World" << std::endl;
    return 0;
}

void test_1()
{
    std::cout << "---test1------------------------------" << std::endl;

    [] () {std::cout << "Hi" << std::endl;} ();

    [] (int x) {std::cout << x << std::endl;} (100);

    [] (int x,int y) {std::cout << x << " " << y << std::endl;} (100, 200);

}

void test_2()
{
    std::cout << "---test2------------------------------" << std::endl;
    auto l1 = [] () {std::cout << "Hi" << std::endl;};
    l1();

    int num1{100};
    int num2{100};

    auto l2 = [] (int x, int y) {std::cout << x+y << std::endl;};
    l2(10,20);
    l2(num1,num2);

    auto l3 = [] (int &x, int &y) {
        std::cout << "x: " << x << " y: " << y << std::endl;
        x = 1000;
        y = 2000;
    };

    l3(num1, num2);
    l3(num1, num2);
}

void test_3()
{
    std::cout << "---test3------------------------------" << std::endl;

    Person stooge {"Larry",18};
    std::cout << stooge << std::endl;

    auto l4 = [] (Person p){// passed by value, creates a copy of stooge
        std::cout << p << std::endl;
    };

    l4(stooge);

    auto l5 = [] (Person &p){
        p.set_name("Frank");
        p.set_age(25);
        std::cout << p << std::endl;
    };
    l5(stooge);

}

void filter_vector(std::vector<int> &vec,std::function<bool(int)> func)
{
    std::cout << "[";
    for(int i:vec)
    {
        if(func(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << "]" << std::endl;
}

void test_4()
{
    std::cout << "---test4------------------------------" << std::endl;
    std::vector<int> vec {10, 20,30,40,50,60,70,80,90,100};

    filter_vector(vec, [](int x){return x > 50;});


}

auto make_lambda()
{
    return [] () {std::cout << "This lambda was made using make_lambda function" << std::endl;};
}

void test_5()
{
    std::cout << "---test5------------------------------" << std::endl;

    auto l5 = make_lambda();

    l5();
}

void test_6()
{
    std::cout << "---test6------------------------------" << std::endl;
    auto l6 = [] (auto x, auto y)
    {
        std::cout << x << " " << y << std::endl;
    };

    l6(10,20);
    l6(100.34,40.6);
    l6("Kaleb", 6);
    l6(Person("kaleb", 26), Person("Bunny", 12));
}

void test_7()
{
    std::cout << "---test7------------------------------" << std::endl;
    std::vector<Person> stooges
    {
        {"Larry", 24},
        {"John", 12},
        {"Johnson", 30}
    };

    for(const auto &mem:stooges)
    {
        std::cout << mem << std::endl;
    }

    std::sort(stooges.begin(), stooges.end(),[](Person p1, Person p2){
        return p1.get_name() < p2.get_name();
    });
    // doesnt work if Person is declared as const

    for(const auto &mem:stooges)
    {
        std::cout << mem << std::endl;
    }
}