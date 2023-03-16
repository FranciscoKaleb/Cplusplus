#include <iostream>
#include <queue>


void test_1();
void test_2();

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

int main()
{
    // no iterator
    // access thru front() and back()
    // pop removes back element
    // 30 20 10
    //    30 20 pop()
    //       30 pop()

    // first in first out using pop()
    // used for scheduling
    test_1();

    return 0;
}

void test_1()
{
    std::queue<int> q;
    for(int i:{1,2,3,4,5})
    {
        q.push(i);
    }
    display(q);
    q.push(9);
    display(q);
    std::cout << "Front:" << q.front() << std::endl;
    std::cout << "Back:" << q.back() << std::endl;
    q.pop();
    display(q);

    while(!q.empty())
    {
        q.pop();
    }
    display(q);
    std::cout << q.size() << std::endl;

    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);

    q.front() = 5;
    q.back() = 500;
    display(q);
}

void test_2()
{

}