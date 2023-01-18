//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
//void display_Move(Move s);

class Move
{
private:
    int *data;
public:
    void set_data_value(int d)
    {
        *data = d;
        cout << "value set to " << d << endl;
    }
    int get_data_value()
    {
        return *data;
    }
    Move(int d);
    Move(const Move &source);
    Move(Move &&source);
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "constructor for " << d << endl;
}
Move::Move(const Move &source)
:Move(*source.data) 
{                   
    cout << "Copy constructor - Deep copy for " << *data << endl;
}

Move::Move(Move &&source)
:data {source.data}
{
    source.data = nullptr;
    cout << "Move constructor - Moving resources: " << *data << endl;
}


Move::~Move()
{
    if(data != nullptr)
    {
        cout << "Destructor is freeing data for " << *data << endl;
    }
    else
    {
        cout << "Destructor is freeing data for nullptr" << endl;
    }
    delete data;
}

void display_Move(Move c)
{ 
    cout << c.get_data_value() << endl;
}

int main()
{
    vector<Move> vec;
    
    vec.push_back(Move(10)); // will trigger the copy constructor that accepts r value since 10 is r value
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
}

void Example_1()
{
   
}

