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

//Move constructor
MyString::MyString(MyString &&source)
:str(source.str) 
{
    cout << "[6] Move, string " << *source.str << " from " << &str << " is moved to " << &str << endl;
    source.str = nullptr;
    cout << "[6] Move, " << &source.str << " is nulled " << endl;
}

// move assignment
MyString &MyString::operator=(MyString &&rhs)
{
    cout << "[6] Move, pointer " << &str << " pointer, " << &rhs.str << " is nulled " << endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
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

//copy assignment

MyString &MyString::operator=(const MyString &rhs)
{
    cout << "[5] Copy Assignment starts; " << &str << " = " << &rhs.str <<  endl;
    if(this == &rhs)
    {
        cout << "[5] it doesnt make sense to do that" << endl;
        return *this;
    }
    else
    {
        delete [] this->str;
        str = new char[std::strlen(rhs.str)+1];
        std::strcpy(this->str,rhs.str);
        cout << "[5] Copy Assignment ends; " << &str << " -> " << str <<  endl;
        return *this;
    }
} 

// == operator
bool operator==(const MyString &lhs, const MyString &rhs)
{
    if(std::strcmp(lhs.str,rhs.str) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// to lower case
MyString operator-(const MyString &obj)
{
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for(size_t i = 0; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// concatenation

MyString operator+(const MyString &lhs, const MyString &rhs) 
{
    size_t buff_size = std::strlen(lhs.str) +std::strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// display method

void MyString::display() const 
{
    std::cout << str << " : " << get_length() << endl;
}

int MyString::get_length() const 
{
    return std::strlen(str);
}

const char *MyString::get_str() const 
{
    return str;
}