#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double num {1234.5678};
	double num2 {12345.678};
	double num3 {123.4567};
	double num4 {12345678.9101112};
	double num5 {-12345678.9101112};

	cout<< "[default]" << endl;
	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl; // precision 6 default
	cout << num4 << endl;
	cout << num5 << endl << endl;
	cout << resetiosflags(ios::floatfield);

	cout<< "[setprecision - > 9]- shows max of 9 digit, rounds off EXCESS" << endl;
	cout << setprecision(9);
	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl; // precision 9
	cout << num4 << endl;
	cout << num5 << endl << endl;
	cout << resetiosflags(ios::floatfield);

	cout<< "[setprecision - > 9; showpoint] - shows max of 9 digit, rounds off excess" << endl
	<<", put 0 if lacks" << endl;
	cout << setprecision(9); //
	cout << showpoint;
	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl; // precision 9
	cout << num4 << endl;
	cout << num5 << endl << endl;
	cout << resetiosflags(ios::floatfield);

	cout<< "[setprecision - > 9; fixed] - shows 9 digit after decimal point" << endl;
	cout << setprecision(9); // foxed with trailing 0 ; 6 decimal
	cout << fixed;
	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl; // precision 9
	cout << num4 << endl;
	cout << num5 << endl << endl;
	cout << resetiosflags(ios::floatfield);

	cout<< "[setprecision - > 3; scientific]" << endl;
	cout << setprecision(3); // sicnetific
	cout << scientific;
	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl; // precision 3
	cout << num4 << endl;
	cout << num5 << endl << endl;
	cout << resetiosflags(ios::floatfield);

	cout << showpos;
	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl; // precision 3
	cout << num4 << endl;
	cout << num5 << endl << endl;

}
