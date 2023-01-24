//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include "MyString.h"

int main()
{

    MyString greet{"hello"};
    MyString insult{"WEAK"};
    MyString greetings{"hello"};
    MyString empty = -insult;
    greetings = greet + " " + insult;
    //greetings = "hello" + " " + "WEAK"; doesnt work 

    cout << boolalpha;
    cout << (greet == "hello") << endl;
    cout << (greet == greetings) << endl;
    empty.display();// we cant use cout to directly output our MyString class strings
    greetings.display();// so we use .display() function;
    
    
    
    
}



