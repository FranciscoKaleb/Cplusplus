//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{
public:
    void Example_1()
    {
        int num1{},num2{};
        cout << "Enter 2 integers:"<< endl;
        cout << std::boolalpha;
        cin >> num1 >> num2;
        cout << num1 << " < " << num2 << ": " << (num1<num2) << endl;
        cout << num1 << " > " << num2 << ": " << (num1>num2) << endl;
        cout << num1 << " >= " << num2 << ": " << (num1>=num2) << endl;
        cout << num1 << " <= " << num2 << ": " << (num1<=num2) << endl;
    }
    void Example_2()
    {
        int lower{10};
        int upper{20};
        int num1{},num2{};
        
        cout << "Enter a number greater than " << lower << endl;
        cin >> num1;
        cout << std::boolalpha << num1 << " > " << lower << " : " << (num1>lower) << endl;
        
        cout << "Enter a number lower than: " << upper << endl;
        cin >> num2; 
        cout << num2 << " < " << upper << " : " << (num2<upper) << endl;
    }
};

int main(){
    Examples obj;
    obj.Example_2();
    
    
}