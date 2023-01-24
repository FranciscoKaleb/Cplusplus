//
#include <iostream>

#include "MyString.h"

using namespace std;

int main()
{
    MyString greet{"hello"};
    greet = MyString{"Hi"};
    greet = "sup";
    MyString string1 {greet};
}



