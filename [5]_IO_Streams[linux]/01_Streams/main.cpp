#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << (10 == 10) << endl;
	cout << (11 == 10) << endl;

	cout << boolalpha;
	cout << (10 == 10) << endl;
	cout << (11 == 10) << endl;

	cout << noboolalpha;
	cout << (10 == 10) << endl;
	cout << (11 == 10) << endl;

	cout.setf(ios::boolalpha);
	cout << (10 == 10) << endl;
	cout << (11 == 10) << endl;

	cout << resetiosflags(ios::boolalpha); // iomanip function
	cout << (10 == 10) << endl;
	cout << (11 == 10) << endl;


	return 0;
}
