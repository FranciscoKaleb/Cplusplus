#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Item
{
private:
	string name;
	T value;
public:
	Item(string name, T value)
	:name{name}, value {value}
	{

	}
	string get_name() const {return name;}
	T get_value() const {return value;}

};

template <typename T1, typename T2>
struct MyPair
{
	T1 first;
	T2 second;
};

int main()
{
	Item<int> item1 {"larry", 1};
	cout << item1.get_name() << " " << item1.get_value() << endl;

	Item<double> item2 {"House", 1000.1};
	cout << item2.get_name() << " " << item2.get_value() << endl;

	Item<Item<string>> item3 {"Frank", {"C++", "Professor"}};
	cout << item3.get_name() << " "
		 << item3.get_value().get_name() << " "
		 << item3.get_value().get_value() << endl;

	cout << "======================================================" << endl;

	vector<Item<double>> vec;
	vec.push_back(Item<double>("Larry", 100.0));
	vec.push_back(Item<double>("Moe", 200.0));
	vec.push_back(Item<double>("Curly", 300.0));

	for(const auto &item: vec)
	{
		cout << item.get_name() << " " << item.get_value() << endl;
	}

	cout << "+==============================================" << endl;

	MyPair<string, char> pair {"Kaleb", 'C'};
	cout << pair.first << " " << pair.second << endl;

	vector<MyPair<string, int>> name_age {};
	name_age.push_back({"kaleb",26});
	name_age.push_back({"Sam", 20});

	for(const auto pair: name_age)
	{
		cout << pair.first << " " << pair.second << endl;
	}


	return 0;
}
