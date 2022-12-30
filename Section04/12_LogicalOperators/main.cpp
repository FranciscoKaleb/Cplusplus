//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{
public:
    void Example_1()
    {
        int num {0};
        const int lower {10};
        const int upper {20};
        bool within_bounds {false};
        cout << boolalpha << endl;
        
        cout << "Enter an integer between 10 and 20 :" << endl;
        cin >> num;
        within_bounds = ((num > lower) && (num < upper));
        cout << "Number is between 10 and 20? " << within_bounds << endl;
        
    }
    void Example_2()
    {
        int num {0};
        const int point_one {10};
        const int point_two {20};
        bool bounds {false};
        
        cout << boolalpha;
        cout << "Enter any random integer starting from 10 and limit is 20;" << endl;
        cin >> num;
        bounds = ((num >= point_one) && (num <= point_two));
        cout << "is the number you entered is within bounds? " << bounds << endl;
    }
    
    void Example_3()
    {
        int num {0};
        const int lower_one {10};
        const int upper_one {20};
        const int lower_two {50};
        const int upper_two {60};
        bool boundary {false};
        
        cout << boolalpha;
        
        cout << "Enter an integer between 10 and 20 or between 50 and 60" << endl;
        cin >> num;
        boundary = (((num > 10 ) && (num < 20)) || ((num > 50) && (num < 60)));
        cout << "within boundary?" << boundary ;
    }
};

int main()
{
    
    Examples obj;
    obj.Example_3();
    
    
}