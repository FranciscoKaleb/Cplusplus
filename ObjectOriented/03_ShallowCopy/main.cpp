//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
//void display_shallow(Shallow s);

class Shallow
{
private:
    int *data;
public:
    void display_data()
    {
        cout << "The address of pointer is " << &data << " It points to " << data << endl;
    }
    void pointer_null()
    {
        data = nullptr;
    }
    void set_data_value(int d)
    {
        *data = d;
    }
    int get_data_value()
    {
        return *data;
    }
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}
Shallow::Shallow(const Shallow &source)
:data(source.data) // basically mean copy the constructor
{
    
}

Shallow::~Shallow()
{
    delete data;
    cout << "destructor" << endl;
}

void display_shallow(Shallow c)
{
    c.display_data();
    cout << c.get_data_value() << endl;
}

int main()
{
    Shallow obj1 {100}; // calling constructor Shallow(int d) to create an object
    display_shallow(obj1);
    obj1.display_data(); // same address as obj2
    
    Shallow obj2 {obj1}; // pointer is copied 
    obj2.set_data_value(1000);// obj1 data is also changed
    obj2.display_data(); // same address as obj1
    
   
    
    //conclusion - Shallow copy copies where the origin points to. But they are two different pointers
    //weakness - if you change the value in either one of the copies, the others will change to
    
}

void Example_1()
{
   
}

