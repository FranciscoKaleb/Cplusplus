#include <iostream>
#include <string>

template <int N, typename T>
class Array{
	int size {N};
	T values[N];

	friend std::ostream &operator<<(std::ostream &os, const Array<N,T> &arr){
		os << "[";
		for(const auto &val : arr.values){
			os << val << " ";
		}
		os << "]" << std::endl;
		return os;
	}

public:
	Array() = default;
	Array(T init_val){
		for(auto &val:values){
			val = init_val;
		}
	}

	int get_size() const{
		return size;
	}

	T fill(T val){
		for(auto &item:values){
			item = val;
		}
	}

	T &operator[](int index){
		return values[index];
	}
};

int main()
{
	Array<100,char> nums;
	std::cout << nums << std::endl;

	Array<100, std::string> nums2 {"cat"};
	std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
	std::cout << nums2 << std::endl;
	nums2[0] = {"dog"};
	std::cout << nums2 << std::endl;
}
