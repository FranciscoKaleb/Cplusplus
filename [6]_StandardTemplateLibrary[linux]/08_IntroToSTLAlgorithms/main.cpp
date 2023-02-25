#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cctype>
#include "NonModifying.h"

class Person
{
private:
	std::string name;
	int age;
public:
	Person() = default;
	Person(std::string name, int age)
	:name{name}, age{age}
	{

	}
	bool operator<(const Person &rhs) const
	{
		return this->age < rhs.age;
	}
	bool operator==(const Person &rhs) const
	{
		return (this->name == rhs.name && this->age == rhs.age);
	}
};

void count_test()
{
	std::cout << "\n=================================" << std::endl;
	std::vector<int> vec {1,2,3,4,5,1,6,1,2,3};

	int num = std::count(vec.begin(), vec.end(), 1);

	std::cout << num << " occurence found" << std::endl;
}

void count_if_test()
{
	std::cout << "\n=========================================" << std::endl;

	//count only if the element is even
	std::vector<int> vec {1,2,3,4,5,1,2,1,100};
	int num {};
	num = std::count_if(vec.begin(), vec.end(), [](int x) {return x%2 == 0 ;});
	std::cout << num << std::endl;

}

void replace_test()
{
	std::cout << "\n==========================" << std::endl;

	std::vector<int> vec {1,2,3,4,5,1,2,1};
	for(auto i:vec)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::replace(vec.begin(), vec.end(),1,100); //replace 1 with 100;
	for(auto i:vec)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void string_transform_test()
{
	std::cout << "\n====================================" << std::endl;

	std::string str1 {"This is a test"};
	std::cout << "Before transform: " << str1 << std:: endl;
	std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
	std::cout << "After transform: " << str1 << std::endl;
	std::transform(str1.begin(), str1.end()-10, str1.begin(), ::tolower);
	std::cout << "After transform: " << str1 << std::endl;
}

int main()
{
	string_transform_test();
	return 0;
}


