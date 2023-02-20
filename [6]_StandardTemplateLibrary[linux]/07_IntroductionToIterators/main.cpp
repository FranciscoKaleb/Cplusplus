#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();

int main()
{
	//test_1();
	//test_2();
	//test_3();
	//test_4();
	test_5();
	return 0;
}

void test_1()
{
	std::cout << "\n================================" << std::endl;
	std::vector<int> nums {1,2,3,4,5};
	auto it = nums.begin();
	std::cout << *it << std::endl; //points to 1

	it++;
	std::cout << *it << std::endl; //points to 2

	it+= 2;
	std::cout << *it << std::endl; //points to 4

	it = nums.end()-1;
	std::cout << *it << std::endl;
}

void test_2()
{
	std::vector<int> nums1 {1,2,3,4,5};
	std::vector<int>::iterator it = nums1.begin();
	while(it != nums1.end()){
		std::cout << *it << std::endl;
		it++;
	}

	it = nums1.begin();
	while(it != nums1.end()){
		*it = 0;
		it++;
	}
}

void test_3()
{
	std::cout << "\n================================" << std::endl;
	std::vector<int> nums {1,2,3,4,5};

	std::vector<int>::const_iterator it1 = nums.begin();

	while(it1 != nums.end())
	{
		std::cout << *it1 << std::endl;
		it1++;
	}

	it1 = nums.begin();
	while(it1 != nums.end())
	{
		//*it1 = 0; //generates error. const iterator cant changed
		it1++;
	}
}

void test_4()
{
	std::vector<int> vec {1,2,3,4};
	auto it1 = vec.rbegin(); //reverse iterator -- starts counting from the end
	while(it1 != vec.rend())
	{
		std::cout<< *it1 << std::endl;
		it1++;// notice we dont use "--it1" even though we are reading from the end unlike loops without iterator
	}


	//list
	std::list<std::string> name {"Larry", "Moe", "Curly"};
	auto it2 = name.crbegin(); //constant reverse iterator -- read from the end
	std::cout << *it2 << std::endl;
	it2++;
	std::cout << *it2 << std::endl;

	//map
	std::map<std::string, std::string> favorites{
		{"aFrank","C++"},
		{"ABill", "Java"},
		{"CJames", "Haskell"}
	};
	auto it3 = favorites.begin(); //iterator over map of strings pairs
	while (it3 != favorites.end())
	{
		std::cout << it3->first << ":" << it3->second << std::endl; // will print alphabetical/numerical ASCII order
		it3++;
	}
}

void test_5()
{
	std::vector<int> num {1,2,3,4,5,6,7,8,9};
	auto it1 = num.begin()+2;
	auto it2 = num.end()-3;

	while(it1 != it2) //will not print 7, we are using != not <=
	{
		std::cout << *it1 << std::endl; // prints 3-6
		it1++;
	}
}
