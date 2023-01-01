//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{ 
public:
    void Example_1()
    {
        int num{};
        
        cout << "Enter an integer" << endl;
        cin >> num;
        cout << ((num%2==0)? "is even" : "is odd");
    }
    void Example_2()
    {
        int num1 {0};
        int num2 {0};
        
        cout << "Enter two integers" << endl;
        cin >> num1 >> num2;
        
        if(num1 != num2)
        {
            cout << "larger: " << ((num1 > num2) ? num1 : num2) << endl;
            cout << "smaller: " << ((num1 < num2) ? num1 : num2) << endl;
        }
        else {
            cout << "The numbers are the same" << endl;
        }
    }
};

int main()
{
    //also called itenary operator having three . . .
    Examples obj;
    obj.Example_2();
    
    
}