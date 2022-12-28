#include <iostream> //responsible for cout and cin

//using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main() 
{
    
    // C ++ approach of initializing values
    int num1 {0};
    float num2 {0};
    double num3 {0};
    
    cout << "enter an integer: \n";
    cin >> num1;
    cout << "enter a float: \n";
    cin >> num2;
    cout << "enter a double: \n";
    cin >> num3;
    
    cout << "integer: " << num1 << endl;
    cout << "float: " << num2 << endl;
    cout << "double: " << num3 << endl;
    
    
    
    //return 0;
}   

