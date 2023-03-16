#include <iostream>
#include <queue>
#include <stack>
#include <cctype>
#include <string>

using namespace std;


// prototype function
void remove_space(string &s);
void turn_upper_case(string &s);


// display functions
template<typename T>
void display(std::queue<T> q)
{
    std::cout << "[";
    while(!q.empty())
    {
        T elem = q.front();
        q.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

template <typename T>
void display(std::stack<T> s)
{
    std::cout << "[";
    while(!s.empty())
    {
        T elem = s.top();
        s.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    // [0] declare the needed variables
    string test {"ABCDE"};
    bool palindrome {false};
    queue<char> q;
    stack<char> s;
    int length;


    cout << test << endl;

    // [1] delete spaces in the string
    remove_space(test);

    // [2] display to check if deleted
    cout << test << endl;

    // [3] turn to uppercase
    turn_upper_case(test);

    // [4] test if uppercase successful
    cout << test << endl;

    // [5] push each char of the string into two containers, stack and queue using range based forloop
    for(const auto &mem: test)
    {
        s.push(mem);
        q.push(mem);
    }

    cout << "Queue and stack is actually written in reverse" << endl;

    // [6] check content of the containers
    cout << "Stack ";
    display(s);
    cout << "Queue ";
    display(q);


    // [7] check if palindrome using for loop, queue's .front(), stack's .top(), pop() method
    length = s.size();
    for(size_t i = 0; i < length; i++) // alternative while(!q.empty())
    {
        if(s.top() == q.front())
        {
            palindrome = true;
        }
        else
        {
            palindrome = false;
        }
        cout << endl;
        cout << "Stack top: " << s.top() << endl;
        cout << "Queue front: " << q.front() << endl;
        cout << "Stack ";
        display(s);
        cout << "Queue ";
        display(q);
        s.pop();
        q.pop();
    }

    // [8] output the result of boolean
    cout << boolalpha;
    cout << endl;
    cout << "palindrome: " << palindrome << endl;


    return 0;
}

void remove_space(string &s)
{
    for(size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            s.erase(i,1);
            i--;
        }
    }
}

void turn_upper_case(string &s)
{
    for(size_t i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
}


