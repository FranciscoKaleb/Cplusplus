//
#include <iostream>

#include "MyString.h"

using namespace std;

int main()
{
    MyString greet{"hello"};
    greet = MyString{"Hi"};
    greet = "sup"; // uses copy assignment =
    MyString string{greet}; // uses copy constructor {}
    
}



