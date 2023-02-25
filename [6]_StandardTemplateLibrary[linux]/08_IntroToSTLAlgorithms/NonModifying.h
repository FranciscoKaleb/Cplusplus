#include <vector>
#include <iostream>
#include <algorithm>


void all_of_test() // returns bool
{
	// all_of checks if each element in a container satisfies the condition, returns true or false;
	std::vector<int> vec {1,3,3,6,2,7,7,9,13,170};

	if(std::all_of(vec.begin(), vec.end(), [](int x) {return x > 100;}) == true)
	{
		std::cout << "All the elements are greater than 100" << std::endl;
	}

	else{
		std::cout << "Not all the elements are greater than 100" << std::endl;
	}
}

void any_of_test() // returns bool
{
	// returns true if an element satisfies the condition
	std::vector<int> vec {1,1,2,2,3,3,10,40,50,50};
	if(std::any_of(vec.begin(),vec.end(),[](int x) {return x == 10;}))
	{
		std::cout << "An element satisfies the condition" << std::endl;
	}
	else{
		std::cout << "No element satisfies the condition" << std::endl;
	}
}

void none_of_test()// returns bool
{
	//returns true if each lambda return result is false
	std::vector<int> vec {1,1,2,2,4,3,10,40,50,50};

	if(std::none_of(vec.begin(),vec.end(),[](int x) {return x == 4;}))
	{
		std::cout << "none of the element is equal to 4" << std::endl;
	}
	else
	{
		std::cout << "an element is equal to 4" << std::endl;
	}
}

void print(std::string name)
{
	std::cout << name << " Congrats!" << std::endl;
}
void for_each_test() // execute function
{
	std::vector<std::string> vec {"Kaleb", "Francisco", "Czarina"};

	//for_each(vec.begin(),vec.end(),[](int x){std::cout<<x<<" ";});
	for_each(vec.begin(),vec.end(),print);
}

void find_test()
{
	// if number is found, returns the number to assign it to iterator, returns random to iterator if not found
	std::cout << "\n====================================" << std::endl;

	std::vector<int> vec {1,2,3,4,5};

	std::vector<int>::iterator loc = std::find(vec.begin(), vec.end(), 8);

	if(loc != vec.end())
	{
		std::cout << "Found the number " << *loc << std::endl;
	}
	else{
		std::cout << "Coudn't find the number.___ " << *loc <<  std::endl;
	}
}

void find_if_test()
{
	//equate searched value to iterator if lambda return true
	std::vector<int> vec {1,2,3,4,5,6};

	auto it = std::find_if(vec.begin(), vec.end(),[](int x){return x%2 == 0;});
	std::cout << *it << std::endl;
}

void find_if_not_test()
{
	//equate searched value to iterator if lambda statement return false
	std::vector<int> vec {1,2,3,4,5,6};

	auto it = std::find_if_not(vec.begin(), vec.end(),[](int x){return x > -1;});
	std::cout << *it << std::endl;
}

void find_end_test()
{
	int myint[] = {1,2,3,4,5,1,2,3,4,5};
}






