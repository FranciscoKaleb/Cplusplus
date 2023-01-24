#include <cstring>
#include <iostream>

#include "MyString.h"

using namespace std;

// no args constructor
MyString::MyString()
    :str{nullptr}
{
    str = new char[1];
    *str = '\0';
    cout << "[1] Empty constructor; new pointer " << &str << " -> " << str << endl;
}

//overloaded constructor
MyString::MyString(const char *s)
    :str{nullptr}
{
    if(s == nullptr)
    {
        cout << "[1.1] equals to null" << endl;
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
        cout << "[1] overloaded cons; new pointer " << &str << " -> " << str << endl;
    }
}

// copy constructor
MyString::MyString(const MyString &source)
    :str{nullptr}
{
    
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str, source.str);
    cout << "[3] copy constructor; new pointer " << &str << " -> " << str << endl;
}

MyString::~MyString()
{
    cout << "[4] destructor for " << &str << endl;
}

