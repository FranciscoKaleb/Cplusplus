//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>


class Animals
{
private:
    
    friend class Insects;
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
    void create_animel() // since Insects class is a friend of Animalm it can access its private members
    {
        Animals dog;
        dog.set_name("doggy");
        cout << dog.get_name() << endl;
    }
};

int main()
{
    Insects obj;
    obj.set_name("dragonfly");
    cout << obj.get_name() << endl;
    obj.create_animel();
   
    
}



