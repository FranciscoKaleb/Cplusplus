//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
 #include "MyString.h"
#include <cstring>
int main()
{

    MyString greet{"hello"};
    MyString insult{"WEAK"};
    MyString greetings{"hello"};
    MyString empty = -insult;
    char name[] {"kaleb"};
    greetings = greet + " " + name;
    //greetings = "hello" + " " + "WEAK"; doesnt work 

    cout << boolalpha;
    cout << (greet == "hello") << endl;
    cout << (greet == greetings) << endl;
    empty.display();// we cant use cout to directly output our MyString class strings
    greetings.display();// so we use .display() function;
    
    
    
    
}



