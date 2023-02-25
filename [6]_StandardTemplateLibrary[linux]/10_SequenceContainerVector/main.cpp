#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

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
void test_11();

class Person{
private:
    std::string name;
    int age;
public:
    Person();
    Person(std::string name, int age)
    :name{name}, age{age}
    {}
   // ~Person();
    friend std::ostream &operator<<(std::ostream &os,const Person &rhs)
    {
        os << std::setw(20) << std::left << rhs.name << " " << rhs.age << std::endl;
        return os;
    }
    bool operator<(const Person &rhs)const
    {
        return this->age<rhs.age;
    }
    bool operator==(const Person &rhs)const
    {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

template <typename T>
void display(const std::vector<T> &vec)
{
    std::cout << "[";
    for(const auto &mem:vec)
    {
        std::cout << mem << " ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    //test_1();
    //test_2();
    //test_3();
    //test_4();
    //test_6();
    //test_7();
    //test_8();
    //test_9();
    test_5();
    //test_11();

	return 0;
}

void test_1() //emplace_back , useful algo
{
    std::vector<Person> vec {};
    vec.emplace_back("kaleb", 26);
    vec.emplace_back("sam", 20);

    for(const auto &mem: vec)
    {
        std::cout << mem;
    }
}

void test_2() //empty and sort test. useful
{
    std::vector<Person> vec {};
    std::vector<Person> vec2 {{"kaleb", 26},{"Sam",20}};
    std::vector<int> vec3 {1,2,3,4,5,9,8};
    ///////////////////////////////////// empty test
    std::cout << std::boolalpha << vec.empty() << std::endl;
    vec.swap(vec2);
    std::cout << std::boolalpha << vec.empty() << std::endl;


    ///////////////////////////////////// sort test
    for(const auto &mem: vec3)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
    std::sort(vec3.begin(),vec3.end());
    for(const auto &mem: vec3)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
    /////////////////////////////////////
}

void test_3() //inserting value or vector to another vector, useful stuff
{
    std::vector<int> vec1 {1,2,3,5,3,8};
    std::vector<int> vec2 {5,6,8,1,8,11};

    auto it = std::find(vec1.begin(), vec1.end(), 3);
    vec1.insert(it, 300);

    it = std::find(vec1.begin(),vec1.end(), 5);
    vec1.insert(it, vec2.begin(), vec2.end());

    display(vec1);

}

void test_4() //pop_back, clear()
{
    std::vector<Person> vec {
        {"kaleb",26},
        {"Sam", 19}
    };
    display(vec);
    vec.pop_back();
    display(vec);
    vec.clear();
    display(vec);
}

void test_5() //vec.erase, clear example of iterator, useful stuff
{
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};

    display(vec);
    vec.erase(vec.begin(), vec.begin()+2);
    display(vec);

    auto it = vec.begin();
    while(it != vec.end())
    {
        if(*it%2 == 0)
        {
            vec.erase(it);
        }
        else
        {
            it++;
        }
    }
    display(vec);
    ////////////////Remove algo is quite complex, better use erase() func of vector
    std::vector<int> vec2 {1,2,3,4,5,6,7,8,9};
    auto it2 = vec2.begin();
    display(vec2);
    std::remove(vec2.begin(), vec2.end(), 3);

    display(vec2);

}

void test_6() //copy and copy if , useful stuff
{
    std::vector<int> vec {1,2,3,4,5};
    std::vector<int> vec2 {10,20};

    display(vec);
    display(vec2);

    std::copy(vec.begin(), vec.end(), std::back_inserter(vec2));
    display(vec);
    display(vec2);

    std::copy_if(vec.begin(),vec.end(), std::back_inserter(vec2), [](int x) {return x%2 == 0;});
    display(vec);
    display(vec2);

}

void test_7() //transform, putting the result of the operation of 2 vectors to a 3rd vector
{
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;
    //vec3.resize(vec1.size());

    std::transform(vec1.begin(),vec1.end(),vec2.begin(),std::back_inserter(vec3),
                  [](int x, int y) {return x*y;});

    //std::transform(vec1.begin(),vec1.end(),vec2.begin(),vec3.begin(),
    //              [](int x, int y) {return x*y;});

    display(vec3);
}

void test_8() //insert, useful stuff
{
    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vec2 {100,200,300,400,500};

    display(vec1);
    display(vec2);

    auto it = std::find(vec1.begin(),vec1.end(), 5);
    if(it != vec1.end())
    {
        std::cout << "Inserting..." << std::endl;
        vec1.insert(it,vec2.begin(),vec2.end());
    }
    display(vec1);
    display(vec2);
}

void test_9()
{

}

void test_10()
{

}

void test_11()
{

}