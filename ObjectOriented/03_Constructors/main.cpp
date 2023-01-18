//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>

class Player
{
private:
    std::string name {};
    int health {};
    int xp {};
    
public:
    Player() 
    :Player("none",100,0) //default values using delegating constructor
    {
        //default constructor
    }
    
    Player(std::string name)
    :Player(name,100,0)
    {
        this->name = name;
    }
    
    Player(std::string name, int health)
    :Player(name, health, 0)
    {
        this->name = name;
        this->health = health;
    }
    
    Player(std::string n, int h, int x) 
    :name{n},health{h},xp{x} 
    {
        
    }
    
    Player(const Player &source) // copy constructor
    :name {source.name}, health {source.health}, xp {source.xp}
    {
        
    }
    
    ~Player()
    {

    }
    
    
    
    void set_name(std::string set_name)
    {
        name = set_name;
    }
    static void print_info(const Player &p)
    {
        cout << p.name << " " << p.health << " " << p.xp << " " << &p << endl;
    }
};




        
        
        
int main()
{
    
    Player obj {"Hans",800,900};
    Player obj2 {"Hans",800};
    Player obj3 {"Hans"};
    Player obj4;
    Player obj5 = Player(obj);
    Player *obj6 = new Player(obj); // makes copy of obj, created dynamically without variable name

    Player::print_info(obj);
    Player::print_info(obj2);
    Player::print_info(obj3);
    Player::print_info(obj4);
    Player::print_info(obj5);
    Player::print_info(*obj6);
    
    delete obj6;
}

void Example_1()
{
   
}

