#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>

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
    void set_name(std::string name)
    {
        this->name = name;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    std::string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }

    auto change_person1()
    {
        return [=] (std::string new_name, int new_age)
        {
            name = new_name;
            age = new_age;
        };
    }
    auto change_person2()
    {
        return [this] (std::string new_name, int new_age)
        {
            name = new_name;
            age = new_age;
        };
    }
    auto change_person3()
    {
        return [&] (std::string new_name, int new_age)
        {
            name = new_name;
            age = new_age;
        };
    }



    bool operator<(const Person &rhs)
    {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs)
    {
        return this->age == rhs.age && this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << rhs.name << " " << rhs.age << std::endl;
    return os;
}


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


int main(int argc, char **argv)
{
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();
    test_8();
    test_9();
    test_10();
    std::cout << "Hello World" << std::endl;
    return 0;
}

int global_x {10000};

void test_1()
{
    std::cout << "\n---test1--------------------------------" << std::endl;

    int local_x {100};

    auto l = [local_x] () {
        std::cout << local_x << std::endl;
        std::cout << global_x << std::endl;
    };

    l();

}

void test_2() // mutable keyword allows lambda expression to modify captured object by value
{
    std::cout << "\n---test2--------------------------------" << std::endl;

    int x{100};

    auto l = [x] () mutable {
        x += 100;
        std::cout << x << std::endl;
    };

    l();
    std::cout << x << std::endl;

    l();
    std::cout << x << std::endl;

}

void test_3()
{
    std::cout << "\n---test3--------------------------------" << std::endl;

    int x {100};

    auto l = [&x] () mutable
    {
        x += 100;
        std::cout << x << std::endl;
    };

    l();
    std::cout << x << std::endl;

}

void test_4()
{
    std::cout << "\n---test4--------------------------------" << std::endl;

    int x {100};
    int y {200};
    int z {300};

    auto l = [=] mutable // = means capture everything by value( copy)
    {
        x += 100;
        y += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    };

    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;


}

void test_5()
{
    std::cout << "\n---test5--------------------------------" << std::endl;

    int x {100};
    int y {200};
    int z {300};

    auto l = [&] () // [&] means capture all by reference
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };

    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}

void test_6()
{
    std::cout << "\n---test6--------------------------------" << std::endl;
    int x {100};
    int y {200};
    int z {300};

    auto l = [=, &y] () mutable // capture everything by value, y by reference
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };

    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

}

void test_7()
{
    std::cout << "\n---test7--------------------------------" << std::endl;

    int x {100};
    int y {200};
    int z {300};

    auto l = [&, x, z] () mutable // capture everything by value, y by reference
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };

    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

}

void test_8()
{
    std::cout << "\n---test8--------------------------------" << std::endl;
    Person person("Larry", 18);
    Person person2("Spidey", 44);
    std::cout << person << std::endl;

    auto change_person1 = person.change_person1(); // returns a lambda making change_person1 a lambda
    // makes change_person1 the same as person// sets their address the same
    // a change in 'person' will change 'change_person1', a change in 'change_person1' will change 'person'
    change_person1("Moe", 30);
    std::cout << person << std::endl;
    person.set_name("Elon");

    auto change_person2 = person.change_person2();
    change_person2("curly", 42);
    std::cout << person << std::endl;

    auto change_person3 = person.change_person3();
    change_person3("Coco", 34);
    std::cout << person << std::endl;

}

class Lambda
{
private:
    int y;
public:
    Lambda(int y) : y{y} {};

    void operator() (int x) const
    {
        std::cout << x + y << std::endl;
    }
};

void test_9()
{
    std::cout << "\n---test9--------------------------------" << std::endl;

    int y {100};

    Lambda lambda1(y);
    auto lambda2 = [y] (int x) {std::cout << x+y << std::endl;};

    lambda1(200);
    lambda2(200);

}

class People
{
private:
    std::vector<Person> person;
    int max_people;
public:
    People(int max = 10) :max_people{max} {}
    People(const People &p) = default;

    void add(std::string name, int age)
    {
        if(person.size() < max_people)
        {
            person.emplace_back(name, age);
            std::cout << "successfully added!" << std::endl;
        }
        else
        {
            std::cout << "Reached max number of people" << std::endl;
        }
    }
    void add(const Person &p)
    {
        if(person.size() < max_people)
        {
            person.emplace_back(p);
            std::cout << "successfully added!" << std::endl;
        }
        else
        {
            std::cout << "Reached max number of people" << std::endl;
            // or throw an exception
        }
    }
    void set_max_people(int max)
    {
        max_people = max;
    }
    int get_max_people() const
    {
        return max_people;
    }
    void print()
    {
        std::cout << "Total: " << person.size() << std::endl;
        for(const auto &mem:person)
        {
            std::cout << mem;
        }
    }
    std::vector<Person> get_people(int max_age) // returns a vector, accepts an int parameter
    {
        std::vector<Person> result; // the vector that will be returned

        int count{0}; // unnecessary in my example, used in instructors example
        std::copy_if( // copies the person object to vector of person 'result' if it is within the age requirement
            person.begin(),
            person.end(),
            std::back_inserter(result),
            [this, &count, max_age] (Person &p)
            {
               return p.get_age() > max_age && ++count <= max_people;
            }
        );
        return result; // returning the vector
    }
};

void test_10()
{
    std::cout << "\n---test10--------------------------------" << std::endl;

    People filipino{4};
    std::vector<Person> adults;

    Person p1{"kaleb", 26};
    Person p2{"Sam", 20};
    Person p3{"Hawi", 4};

    filipino.add(p1);
    filipino.add(p2);
    filipino.add(p3);
    filipino.add("Czarina", 24);
    filipino.add("Ben", 24); // should trigger exception or cout message

    filipino.print();

    adults = filipino.get_people(18);

    std::cout << "\n--------Adults--------" << std::endl;
    for(const auto &mem:adults)
    {
        std::cout << mem;
    }
    std::cout << "\n--------Adults--------" << std::endl;

}