#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num {255};

	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout << 55 << endl << endl;

	cout << "showbase" << endl;
	cout << showbase;
	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout << 55 << endl << endl;

	cout << "uppercase for hex" << endl;
	cout << uppercase;
	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout << 55 << endl << endl;

	cout << showpos << "showpos" << endl;
	cout << dec << num << endl;
	cout << noshowpos << num << endl << endl;


	return 0;
}
