//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include <AreaSolver.hpp>

void Example_1(); // this is called function prototyping
void Example_2();
void Example_3();
void Example_4();
void Example_5();
void print_array(int arr[], size_t size);
void change_array(vector<string> &vec);
unsigned long long factorial(unsigned long long n);
double doubled_everyday(int n, double amount = 0.01);



int main()
{
    Example_5();
    
}



AreaSolver obj; // this is a called a global variable
void Example_1()
{
    double r = 5.9;
    cout << obj.Circle(r);
}
void Example_2()
{
    int collection[] {23, 33, 45, 6, -3 };
    print_array(collection,5);
}
void Example_3()
{
    vector<string> strvec {"kaleb", "marquez"};
    change_array(strvec);
    for(int i = 0; i < strvec.size(); i++)
    {
        cout << strvec.at(i) << endl;
    }
}
void Example_4()
{
    cout << factorial(8);
}
void Example_5()
{
    double total_amount = doubled_everyday(28);
    cout << total_amount;
}






void print_array(int arr[], size_t size) // can modify the array
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void print_array(const int arr[], size_t size) // cannot modify the array with const keyword
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void change_array(vector<string> &vec) // passed by reference
{
    for(int i = 0; i < vec.size(); i++)
    {
        vec.at(i) = "x";
    }
}
unsigned long long factorial(unsigned long long n) // recursive function - a function that calls it self
{
    if(n == 0)
    {
        return 1;
    }
    return n*factorial(n-1); // 
}

double doubled_everyday(int n, double amount)
{
    if(n <= 1)
    {
        return amount;
    }
    return doubled_everyday(--n, amount*2);
}


