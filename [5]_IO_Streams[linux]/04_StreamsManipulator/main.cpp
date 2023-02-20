
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double num {1234.5678};
	std::string hello{"hello"};

	cout << setw(10) << left << num << hello << endl; // justify num to the left
	cout << setw(10) << right << num << hello << endl; // justify num to the right

	cout << setw(10) << num
		 << setw(10) << right << hello
		 << setw(15) << right << hello
		 << endl;

	cout << setfill('-') << setw(10) << num
		 << setfill('-') << setw(10) << right << hello
		 << setfill('-') << setw(15) << right << hello
		 <<  endl; //
}
