//
using namespace std;
#include <iostream>
#include <cstring>
#include <string.h>


int main()
{
    char c1 {};
    char c2 {'a'};
    //char c3 {"b"}; // error
    char c4[] {'\0'};
    char c5[] {'a', 'b'};
    char c6[] {"abcde\0"};
    char *c7 {nullptr};
    c7 = new char('k');
    char *c8 {nullptr};
    c8 = new char[10];
    c8 = "kaleb";
    //char *c9[] {nullptr};
    //c9 = new char('o'); error
    //c9 = new char[8];
    //c9 = "francis";
    int *i1 {nullptr};
    i1 = new int();
    //i1 = 12;
    *i1 = 12;
    int z[] {11, 22, 33};
    
    cout << c1 << endl;
    cout << c2 << endl;
    //cout << c3 << endl; error
    cout << c4 << endl;
    cout << c5 << endl;
    cout << c6 << endl << endl;
    
    cout << &c7 << endl;
    cout << c7 << endl;
    cout << *c7 << endl;
    cout << c7[0] << endl << endl;
    
    cout << &c8 << endl;
    cout << c8 << endl;
    cout << *c8 << endl;
    cout << c8[0] << endl << endl;
    
    c7 = c8;
    
    cout << &c7 << endl;
    cout << c7 << endl;
    cout << *c7 << endl;
    cout << c7[0] << endl << endl;
    
    cout << &i1 << endl;
    cout << i1 << endl;
    cout << *i1 << endl << endl;
    
    i1 = z;
    
    cout << &i1 << endl;
    cout << i1 << endl;
    cout << *i1 << endl;
    cout << *(i1+1) << endl;
    cout << *(i1+2) << endl;
    cout << &(*(i1+1)) << endl;
    cout << &(*(i1+2)) << endl;
    (*(i1+2)) = 34;
    cout << (*(i1+2)) << endl;
}



