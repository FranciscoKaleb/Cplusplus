//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>


class Animals
{
    std::string name {};
    void set_name(std::string n)
    {
        name = n;
    }
    std::string get_name()
    {
        return name;
    }
    
};
struct Insects
{
    std::string name {};
    void set_name(std::string n)
    {
        name = n;
    }
    std::string get_name()
    {
        return name;
    }
};

int main()
{
    Insects obj;
    obj.set_name("dragonfly");
    cout << obj.get_name() << endl;
    
    Animals obj; 
    obj.set_name("frog"); // would cause error coz its private by default and cannot be accessed in main
    cout << obj.get_name() << endl;
    
}

void Example_1()
{
   // struct are the same as classes, only difference is that class members is private by dafault
   // struct members are public by default
}

