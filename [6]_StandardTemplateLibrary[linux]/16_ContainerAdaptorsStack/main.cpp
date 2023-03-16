#include <iostream>
#include <stack>
#include <vector>
#include <list>

void test_1();
void test_2();

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
    // no iterators
    // last in first out using pop()
    // used in compiling
    // used to calculate if things are balanced

    test_1();
    //test_2();
    return 0;
}

void test_1()
{
    std::stack<int> s;
    std::stack<int, std::vector<int>> s1;
    std::stack<int, std::list<int>> s2;
    std::stack<int, std::deque<int>> s3;

    for(int i:{1,2,3,4,5})
    {
        s.push(i);
    }
    display(s);
    s.pop();
    s.pop();
    display(s);

}

void test_2()
{

}