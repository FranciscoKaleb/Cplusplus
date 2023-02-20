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
    MyString greetings{"helli"};
    MyString empty = -insult;
    
    greet += greet;
    greet.display();
    greet += insult;
    greet.display();
}



