//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
//void display_Deep(Deep s);

class Deep
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
    int display_data()
    {
        cout << "The address of the pointer is " << &data << " and it points to "<< data << endl;
    }
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}
Deep::Deep(const Deep &source)
:Deep(*source.data) // creates a new pointer for obj2 and copy the data where the obj1 pointer is pointing to
{                   // int the act of obj2 copying object 1, object 2 copied the data where object 1s pointer is pointing to
    cout << "Deep" << endl;
}

Deep::~Deep()
{
    delete data;
    cout << "destructor" << endl;
}

void display_Deep(Deep c)
{
    cout << c.get_data_value() << endl;
}

int main()
{
    Deep obj1 {100}; //calling constructor Deep(int d) to create an object
    display_Deep(obj1);
    obj1.display_data();
    
    Deep obj2 {obj1};//pointer is copied 
    obj2.set_data_value(1000);//obj1 data is also changed
    obj2.display_data();
    
    //conclusion - copy creates a new pointer pointing to a new address. Only value is copied
}



