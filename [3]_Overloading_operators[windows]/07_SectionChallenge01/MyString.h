#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{

private: // attributes
    
    char *str; //pointer to char that holds c style string\
    
public:
    
    MyString();                           // No args constructor
    MyString(const char *s);              // overloaded constructor
    MyString(const MyString &source);     //copy constructor
    MyString(MyString &&source);          // move constructor
    ~MyString();                          // destructor
    
    MyString &operator=(const MyString &rhs); // copy assignment
    MyString &operator=(MyString &&rhs); //move assignment
    
    MyString operator-() const; // make lowercase
    MyString operator+(const MyString &rhs) const; // concatenate
    MyString operator+=(MyString &rhs);
    bool operator==(const MyString &rhs) const; 
    bool operator!=(const MyString &rhs) const; 
    bool operator<(const MyString &rhs) const;
    bool operator>(const MyString &rhs) const;
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_H
