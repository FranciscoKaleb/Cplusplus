#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
private: // attributes
    
    char *str; //pointer to char that holds c style string\
    
public:
    
    MyString();                           // No args constructor
    MyString(const char *s);              // overloaded constructor
    MyString(const MyString &source);      //copy constructor
    
    ~MyString();                          // destructor
    
    MyString &operator=(const MyString &rhs);
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_H
