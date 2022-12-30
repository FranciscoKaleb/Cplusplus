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
    void Challenge()
    {
         /*
         1 dollar  = 100 cents
         1 quarter = 25 cents
         1 dime = 10 cents
         1 nickel = 5 cents
         1 penny = 1 cent
         */
         const int dollar_to_cent {100};
         const int quarter_to_cent {25};
         const int dime_to_cent {10};
         const int nickel_to_cent {5};
         const int penny_to_cent {1};
         
         int dollar {0};
         int quarter {0};
         int dime {0};
         int nickel {0};
         int penny {0};
         
         int num {0};
         int remainder_placeholder {0};
         
         cout << "Enter the number of cents: "  << endl;
         cin >> num;
         
         dollar = num/dollar_to_cent; // assign value to dollar by dividing input to 100
         remainder_placeholder = num%dollar_to_cent; //get the remainder
         quarter = remainder_placeholder/quarter_to_cent; //make the remainder as the new numerator in place of 'num'
         remainder_placeholder = remainder_placeholder%quarter_to_cent;//get the remainder;
         dime  = remainder_placeholder/dime_to_cent;
         remainder_placeholder = remainder_placeholder%dime_to_cent;
         nickel = remainder_placeholder/nickel_to_cent;
         remainder_placeholder = remainder_placeholder%nickel_to_cent;
         penny = remainder_placeholder/penny_to_cent;
         
         
         cout << dollar << endl << quarter << endl << dime << endl << nickel << endl << penny;
         

    }
};

int main()
{
    
    Examples obj;
    obj.Challenge();
    
    
}