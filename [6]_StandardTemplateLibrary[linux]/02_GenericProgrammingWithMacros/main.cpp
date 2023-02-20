#include <iostream>
#include <iomanip>

using namespace std;

#define SQUARE(a) ((a)*(a))

int main()
{
	int result = SQUARE(5);
	int result2 = 100/SQUARE(5);
	cout << result << " " << result2 << endl;
}
