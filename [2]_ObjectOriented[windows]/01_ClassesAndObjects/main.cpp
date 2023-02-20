//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>

class Player
{
    public:
    //attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string words)
    {
        delay(name + ": " + words + "\n");
    }
    bool is_dead();
    void delay(string words)
    {
        for(auto letter : words)
        {
            cout << letter;
            std::this_thread::sleep_for(chrono::milliseconds(90));
        }
        std::this_thread::sleep_for(chrono::milliseconds(1000));
    }
};

int main()
{
    Player Frank;
    Player Hero;
    
    Frank.health = 500;
    Frank.name = "Frank";
    Frank.xp = 20;
    Hero.health = 500;
    Hero.name = "Hero";
    Hero.xp = 20;
    Player *enemy = new Player;
    (*enemy).name = "Villain";
    (*enemy).health = 1000;
    (*enemy).xp = 30;
    
    Hero.talk("Hello there, my name is " + Hero.name);
    Frank.talk("Oh good day sir! I am " + Frank.name);
    (*enemy).talk("Both of you will die today! hahahaha");

}

