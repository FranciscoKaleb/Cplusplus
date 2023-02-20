#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cctype>

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

void find_test()
{
	std::cout << "\n====================================" << std::endl;
	std::vector<int> vec {1,2,3,4,5};
	auto loc = std::find(std::begin(vec), std::end(vec), 8);

	if(loc != std::end(vec))
	{
		std::cout << "Found the number " << *loc << std::endl;
	}
	else{
		std::cout << "Coudn't find the number" << std::endl;
	}

	std::list<Person> players{
		{"Kaleb", 26},
		{"Dexter", 25},
		{"Gerald", 32}
	};

	auto loc2 = std::find(players.begin(), players.end(), Person("Kaleb", 26));
	if(loc2 != players.end())
	{
		std::cout << "Found kaleb " << std::endl;
	}
	else{
		std::cout << "Coudn't find the player" << std::endl;
	}

}

void count_test()
{
	std::cout << "\n=================================" << std::endl;
	std::vector<int> vec {1,2,3,4,5,1,6,1,2,3};

	int num = std::count(vec.begin(), vec.end(), 1);

	std::cout << num << " occurence found" << std::endl;
}


int main()
{
	count_test();
	return 0;
}


