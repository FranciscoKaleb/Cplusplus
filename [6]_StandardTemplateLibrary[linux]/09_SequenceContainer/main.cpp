#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>
void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
void test_8();
void test_9();

int main()
{
    // Fixed size
    // Direct element access .at()
    // provides access to underlying raw array arr[i]
    // Use instead of raw arrays when possible
    // iterators available
    // c++ 11
    test_9();
	return 0;
}

void display(const std::array<int, 5> &arr)
{
    for(auto mem:arr)
    {
        std::cout << mem << " ";
    }
    std::cout << std::endl;
}

void test_1() //size, max size, front back
{
    std::array<int, 5> arr {1,2,3,4,5};
    std::array<std::string,3> arr2 {"kaleb", "Sam", "Marquez"};

    display(arr);
    std::cout << "The size of the array is "<< arr.size() << std::endl;
    std::cout << "The maximum size of the array is: " << arr.max_size() << std::endl;
    std::cout << "The front of the array is : " << arr.front() << std::endl;
    std::cout << "The back of the array is : " << arr.back() << std::endl;
}

void test_2() //fill(array only) and swap
{
    std::array<int, 5> arr {1,2,3,4,5};
    std::array<int, 5> arr3 {1,2,3,4,5};
    std::array<std::string,3> arr2 {"kaleb", "Sam", "Marquez"};

    arr.fill(0);
    display(arr);

    arr.swap(arr3);
    display(arr);
}

void test_3() // uses pointer
{
    std::array<int, 5> arr {1,2,3,4,5};

    int *ptr = arr.data();
    std::cout << *ptr << std::endl;
    *ptr = 10000;
    std::cout << *ptr << std::endl;
}

void test_4() //sort algo
{
    std::array<int, 5> arr {2,3,1,4,5};

    display(arr);
    std::sort(arr.begin(), arr.end());
    display(arr);
}

void test_5() //max element algo, useful
{
    std::array<int,5> arr {2,1,3,4,6};

    std::array<int,5>::iterator min_num = std::min_element(arr.begin(), arr.end());
    auto max_num = std::max_element(arr.begin(),arr.end());
    std::cout << "min: " << *min_num << ", max: " << *max_num << std::endl;
}

void test_6() //adjacent, same value together like 1,1 not 1,2,1, useful
{
    std::array<int,5> arr {2,1,1,5,3};

    auto adjacent = std::adjacent_find(arr.begin(), arr.end());
    if(adjacent != arr.end())
    {
        std::cout << "Adjacent element found with value: " << *adjacent << std::endl;
    }
    else
    {
        std::cout << "No adjacent elements found " << std::endl;
    }
}

void test_7() //accumulate the sum of items in the container, quite useful algo
{

    std::array<int, 5> balance {1000, 455, 600, 1000, 20};
    int sum = std::accumulate(balance.begin(), balance.end(), 0);
    std::cout << "The sum of all balance is : " << sum << std::endl;
}

void test_8() //count specific item within container, like how many 3s are there, useful algo
{
    std::array<int,10> arr {1,2,2,3,4,55,5,6,6,7};

    int count = std::count(arr.begin(),arr.end(), 2);
    std::cout << "Found 2 " << count << " times" << std::endl;
}

void test_9() //count if within range, like how many numbers are between 4 and 7, useful algo
{
    std::array<int,10> arr {1,2,3,4,4,4,4,6,7,8};

    int count = std::count_if(arr.begin(),arr.end(),[](int x) {return (x > 3 && x < 5);});
    std::cout << "Found " << count << " matches" << std::endl;

}


