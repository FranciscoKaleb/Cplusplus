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
    Move(Move &&source)noexcept;
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "[TEMP] New pointer " << &data << " -> " << data << " , value = " << *data << " from " << &d << endl;
}
Move::Move(const Move &source)
:Move(*source.data) 
{                   
    cout << "Copy constructor - Deep copy for " << *data << endl;
}

Move::Move(Move &&source)noexcept
:data {source.data}
{
    cout << "[MOVE] " << "New pointer " << &data << " -> " << data << " , value = " << *data << endl;
    cout << "[MOVE] " << &source.data << " " << source.data << " " << *source.data << " is set to null " << endl;
    source.data = nullptr;
    cout << "[MOVE] " << &source.data << " " << source.data << " " << endl;
}


Move::~Move()
{
    if(data != nullptr)
    {
        cout << "Destructor is freeing data for " << *data << " " << &data << endl;
    }
    else
    {
        cout << "Destructor is freeing data for nullptr " << &data << endl;
    }
    delete data;
}

void display_Move(Move c)
{ 
    cout << c.get_data_value() << endl;
}

int main()
{
    // Move class has only the vector data as its only member
    // so every time you create an object of Move, a new pointer is created
    vector<Move> vec;
    
    vec.push_back(10);
    vec.push_back(20);
    //vec.push_back(30);
    //cin >> a;
    //vec.push_back(10); // will trigger the copy constructor that accepts r value since 10 is r value
    
    //conclusion, Move && just basically move the r values in different location in heap when the vector grow
    
}



