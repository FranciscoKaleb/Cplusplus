//
#include <iostream>

#include "MyString.h"

using namespace std;

int main()
{
    //creates 3 str objects each created strings 
    //what move does is null those extra pointers and free the memory so it can be used for others.
    MyString greet{"hello"};
    MyString{"Hi"};
    greet = "sup";
}



