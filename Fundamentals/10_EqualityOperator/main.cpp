//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{
public:
    void Example_1()
    {
        bool equal_result{false};
        bool not_equal_result{false};
        int num1{0},num2{0};
        
        cin >> num1 >> num2;
        equal_result = (num1 == num2);
        not_equal_result = (num1 != num2);
        
        cout << std::boolalpha; // turns boolean into 'true' instead of 1
        
        cout << "equal result: " << equal_result << endl;
        cout << "not equal result: " << not_equal_result << endl;
    }
    void Example_2()
    {
        bool equal_result{false};
        bool not_equal_result{false};
        char first {}, second{};
        
        cin >> first >> second;
        equal_result = (first == second);
        not_equal_result = (first != second);
        
        cout << std::boolalpha; // turns boolean into 'true' instead of 1
        
        cout << "equal result: " << equal_result << endl;
        cout << "not equal result: " << not_equal_result << endl;
        
    }
};

int main(){
    Examples obj;
    obj.Example_2();
}