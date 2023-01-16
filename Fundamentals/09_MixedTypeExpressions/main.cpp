//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{
public:
    void example1()
    {
        const int count {3};
        int total {0}, num1 {0},num2{0},num3{0};
        double average{0};
        
        cin >> num1 >> num2 >> num3;
        
        total = num1 + num2 + num3;
        
        //average = double(total) / count;           old style
        average = (static_cast<double>(total)) /count;
        
        cout << average;
        
    }
    
};

int main()
{
    Examples obj;
    obj.example1();
}