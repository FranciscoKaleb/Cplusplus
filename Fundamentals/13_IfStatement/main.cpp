//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{
public:
    void Example_1()
    {
        const int min {0};
        const int max {100};
        int input {0};
        
        cout << "Enter a number from 0 - 100" << endl;
        cin >> input;
        if(input == min)
        {
            cout << "value is equals to minimum" << endl;
        }
        if(input < min)
        {
            cout << "value is less than minimum" << endl;
        }
        if(input == max)
        {
            cout << "value is equals to maximum" << endl;
        }
        if(input == (max/2))
        {
            cout << "value is half of maximum" << endl;
        }
        if(input > (max/2) && input != max)
        {
            cout << "value is closer to maximum" << endl;
        }
        if(input < (max/2) && input != min)
        {
            cout << "value is closer to minimum" << endl;
        }
    }
    void Example_2()
    {
        const int min {10};
        const int max {100};
        int input {0};
        
        cout << "Enter an integer " << endl;
        cin >> input;
        if(input < min)
        {
            cout << input << " is less than " << min << endl;
        }
        else if(input == min)
        {
            cout << input << " is equals to " << min << endl;
        }
        else if(input > min && input < max)
        {
            cout << input << " is between " << min << " and " << max << endl;
        }
        else if(input == max)
        {
            cout << "input is equals to " << max << endl;
        }
        else if (input > max)
        {
            cout << "input is greater than " << max << endl;
        }
        
        
    }
    void Example_3()
    {
        int score {0};
        
        cout << "Enter your exam score 0-100" << endl;
        cin >> score;
        
        if(score >= 0 && score <= 100 )
        {
            if(score >= 90)
            {
                if(score > 95)
                {
                    cout << "A+" << endl;
                }
                else
                {
                    cout << "A" << endl;
                }
                
            }
            else if(score < 90 && score >= 80 )
            {
                cout << "B" << endl;
            }
            else 
            {
                cout << "C" << endl;
            }
        }
        else
        {
            cout << "Sorry, " << score << " is not in range" << endl;
        }
    }
    void Example_4()
    {
        int package_length {0};
        int package_width {0};
        int package_height {0};
        
        const int package_limit {10};
        
        const int dimension_limit {10};
        const int tier1_threshold {100};
        const int tier2_threshold {500};
        
        double base_cost {2.50};
        double tier1_surge_charge {0.10};
        double tier2_surge_charge {0.25};
        
        int package_volume{0};
        
        cout << "Hello, welcome to my parcel shipping shop!" << endl;
        cout << "Enter the dimension of your parcel" << endl;
        cout << "length: ";
        cin >> package_length;
        cout << endl;
        cout << "width: ";
        cin >> package_width;
        cout << endl;
        cout << "height: ";
        cin >> package_height;
        cout << endl;
        
        if (package_length <= package_limit && package_width <= package_limit
            && package_height <= package_limit && package_length > 0 && package_width > 0 && package_height > 0)
            {
                package_volume = package_length*package_width*package_height;
                if(package_volume < tier1_threshold)
                    {
                        cout << "your shipment will cost $" << base_cost;
                    }
                else if(package_volume > tier1_threshold && package_volume < tier2_threshold )
                    {
                        base_cost = base_cost + (base_cost * tier1_surge_charge);
                        cout << "your shipment will cost $" << base_cost;
                    }
                else
                    {
                        base_cost = base_cost + (base_cost * tier2_surge_charge);
                        cout << "your shipment will cost $" << base_cost;
                    }
            }
        else if(package_length <= 0 || package_width <= 0 || package_height <= 0)
            {
                cout << "you cannot put zero or negative as dimension"<< endl;
            }
        else
            {
                cout << "sorry your parcel exceed the limit" << endl;
            }
        
    }
};

int main()
{
    
    Examples obj;
    obj.Example_4();
    
    
}