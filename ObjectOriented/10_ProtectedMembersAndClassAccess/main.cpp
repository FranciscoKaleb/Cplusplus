//
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include <cstring>
#include <string.h>

using namespace std;

class Base
{
    
private:
    int a {10};
    
protected:
    int b {20};
    
public:
    int c {30};
    
};

class Derived : public Base
{
    
private:

protected:
   
public:
    
    Base b_obj;
    void display_public()
    {
        
        cout << b_obj.c << endl;
    }
    
    
};

int main()
{

   
}

void Example_1()
{
   
}

