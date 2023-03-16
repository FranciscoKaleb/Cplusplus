#include <iostream>
#include <queue>

void test_1();

int main()
{
    // allows insertions and removal of elements in order from the front of the container
    // elements are stored internally as a vector by default
    // elements are inserted in priority order, largest in front
    // no iterators

    // push - insert element into sorted order
    // pop - removesthe top element (largest)
    // top - access the top element ( largest)
    // empty - check if the queue is empty
    // size - number of elements in the queue
    test_1();
    return 0;
}

void test_1()
{
    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(70);

    std::cout << pq.top() << std::endl; // shows 70

    pq.pop();

    std::cout << pq.top() << std::endl; // shows 20

}