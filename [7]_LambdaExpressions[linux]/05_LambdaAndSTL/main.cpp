#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //for iota

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
//std::ostream &operator<<(std::ostream &os, const Person &rhs);

int main()
{
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();
    return 0;
}

void test_1() // for_each
{
    std::cout << "\n----test1-----------------------------" << std::endl;

    std::vector<int> nums {10,20,30,40,50};

    std::for_each(nums.begin(), nums.end(),
        [] (int num) {
            std::cout << num << " ";
        }
    );

    std::cout << "\n----test1-----------------------------" << std::endl;
}

void test_2() // is_permutation
{
    std::cout << "\n----test2-----------------------------" << std::endl;

    struct Point
    {
        int x;
        int y;
    };

    Point pt1{1,2};
    Point pt2{4,3};
    Point pt3{3,5};
    Point pt4{3,1};

    std::vector<Point> triangle1 {pt1, pt2, pt3};
    std::vector<Point> triangle2 {pt2, pt3, pt4};
    std::vector<Point> triangle3 {pt1, pt2, pt4};

    if(std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), [] (Point lhs, Point rhs)
            {
                return lhs.x == rhs.x && lhs.y == rhs.y;
            }
        ))
    {
        std::cout << "Triangle1 and Triangle2 are equivalent" << std::endl;
    }
    else
    {
        std::cout << "Triangle1 and Triangle2 are not equivalent" << std::endl;
    }


    std::cout << "\n----test2-----------------------------" << std::endl;
}

void test_3() // transform
{
    std::cout << "\n----test3-----------------------------" << std::endl;

    std::vector<int> test_scores{93,88,75,68,65};
    int bonus_points {5};

    std::transform(test_scores.begin(), test_scores.end(), test_scores.begin()+1, [&bonus_points] (int score)
        { // notice that it starts adding at index 1 because of the +1 at 3rd parameter
            return score += bonus_points;
        }
    );

    for(const int &score:test_scores)
    {
        std::cout << score << " ";
    }


    std::cout << "\n----test3-----------------------------" << std::endl;

}

void test_4()
{
    std::cout << "\n----test4-----------------------------" << std::endl;

    std::vector<int> nums{1,2,3,4};

    nums.erase(std::remove_if(nums.begin(), nums.end(),
            [] (int num)
            {
                return num % 2 == 0;
            }
        ),nums.end() // 4th parameter, uses num.end() as new end so its going to delete not just the 1st result
    );               // without 4th parameter, only removes first result

    for(const auto &mem:nums)
    {
        std::cout << mem << " ";
    }

    std::cout << "\n----test4-----------------------------" << std::endl;

}

class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age)
    :name{name}, age{age}
    {}
    Person(const Person &p)
    :name{p.name}, age{p.age}
    {}
    ~Person() = default;

    std::string get_name() const
    {
        return name;
    }
    void set_name(std::string name)
    {
        this->name = name;
    }
    int get_age() const
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
    os << "[Person: " << rhs.name << " " << rhs.age << "]";
    return os;
}

void test_5() //sort
{
    std::cout << "\n----test5-----------------------------" << std::endl;

    Person person1 ("kaleb", 26);
    Person person2 ("Moe", 30);
    Person person3 ("coe", 77);

    std::vector<Person> people;

    people.push_back(person1);
    people.push_back(person2);
    people.push_back(person3);

    std::cout << person1 << std::endl;

    for(const auto &person: people)
    {
        std::cout << person << std::endl;
    }

    std::sort(people.begin(), people.end(), [] (Person lhs, Person rhs){
            return lhs.get_name() < rhs.get_name();
        }
    );

    for(const Person &person:people)
    {
        std::cout << person << std::endl;
    }

    std::cout << "\n----test5-----------------------------" << std::endl;

}


bool in_between(const std::vector<int> &nums, int start_value, int end_value)
{
    bool result {false};
    result = std::all_of(nums.begin(), nums.end(), [start_value, end_value] (int value)
        {
            return value >= start_value && value <= end_value;
        }
    );
    return result;
}


void test_6()
{
    std::cout << "\n----test6-----------------------------" << std::endl;
    std::cout << std::boolalpha;

    std::vector<int> nums(10);

    std::iota(nums.begin(), nums.end(),1); // fill the fixed vector with values starting from 1

    for(int num:nums)
    {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    std::cout << in_between(nums, 50, 60) << std::endl;
    std::cout << in_between(nums, 1, 10) << std::endl;
    std::cout << in_between(nums, 5, 7) << std::endl;

    std::cout << "\n----test6-----------------------------" << std::endl;
}

class Password_Validator1
{
private:
    char restricted_symbol{'$'};
public:
    bool is_valid(std::string password)
    {
        bool result {false};

        result =  std::all_of(password.begin(), password.end(),[this] (char character)
            {
                return character != restricted_symbol;
            }
        );

        return result;
    }
};

class Password_Validator2
{
private:
    std::vector<char> restricted_symbols{'!', '$', '+'};
public:
    bool is_valid(std::string password)
    {
        return std::all_of(password.begin(), password.end(), [this] (char character)
            {// all_of returns true if all the results of 3rd parameter is true;
                return std::none_of(restricted_symbols.begin(), restricted_symbols.end(), [character] (char symbol)
                    { // none_of returns true if all the results of 3rd parameter is false
                        return character == symbol;
                    }
                );
            }
        );
    }

    // [1] accepts a string parameter and returns a bool
    // [2] inside the method, return an all_of() algo to loop through all the char in string and check it in a lambda
    // [3] the lambda inside of all_of() returns a none_of() which loops through the list of restricted char
    // and compare it to each char of the inserted password string.
};

void test_7()
{
    std::cout << "\n----test7-----------------------------" << std::endl;
    std::string password {"Kaleb"};

    Password_Validator2 pv;
    if(pv.is_valid(password))
    {
        std::cout << "password passed" << std::endl;
    }
    else
    {
        std::cout << "invalid character used" << std::endl;
    }


    std::cout << "\n----test7-----------------------------" << std::endl;

}
