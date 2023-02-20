#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // accumulate

using namespace std;

int main()
{
	vector<int> v {1,5,3,-7, 66, 99, 2};

	sort(v.begin(), v.end());

	for(auto elem: v)
	{
		cout << elem << endl;
	}
	// =========================================
	reverse(v.begin(), v.end());

	for(auto elem: v)
	{
		cout << elem << endl;
	}
	// =========================================
	int sum {0};

	sum = accumulate(v.begin(), v.end(), 0); //use 0.0 if double
	cout << sum << endl;
	// =========================================

}
