#include <iostream>
#include <vector>

int main()
{
	std::vector<int> num {1,2,3};
	//std::vector<int>::iterator it = num.begin();
	auto it = num.begin();


	while(it != num.end()){
		std::cout << *it << " ";
		++it;
	}

	for(auto it = num.begin(); it != num.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return 0;
}
