#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
T max(T &a, T &b)
{
	return (a > b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b)
{
	cout << a << " " << b << endl;
}

struct Person
{
	string name {};
	int age {};

	bool operator<(const Person &rhs) const
	{
		return (this->age < rhs.age);
	}
};

ostream &operator<<(ostream &os, const Person &p)
{
	os << p.name;
	return os;
}


int main()
{
	int a = 5;
	int b = 6;
	char c {'a'};
	char d {'b'};
	Person one {"billy", 21};
	Person two {"Bella", 24};


	cout << max<int>(a, b) << endl;
	cout << max<char>(c, d) << endl; // compares ascii value
	func(16, 'h');
	cout << boolalpha << (one<two) << endl;
	func(one, two);
}
