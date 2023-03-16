#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

int main()
{
	int num {};
	double total {};
	string name{};

	string info {"Moe 100 1234.5"};
	istringstream iss {info};
	iss >> name >> num >> total; //extract the value of iss to name, num, total respectively

	cout << setw(10) << left << name
		 << setw(5) << num
		 << setw(10) << total << endl;

	cout << "------------------------------" << endl;

	ostringstream oss{}; // stores string in oss?
	oss << setw(10) << left << name << endl
		<< setw(5) << num
		<< setw(10) << total << endl;
		cout << oss.str() << endl;

	cout << "------------------------------" << endl;
	int value{};
	string entry {};
	bool done = false;
	do
	{
		cout << "Please enter an integer";
		cin >> entry;
		istringstream validator {entry};
		if(validator >> value) //if validator is extracted to value it will return true meaning input is an integer
		{
			done = true;
		}
		else
		{
			cout << "Sorry, that's not an integer" << endl;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}while(!done);

	cout << "you entered an integer " << value << endl << endl;
}
