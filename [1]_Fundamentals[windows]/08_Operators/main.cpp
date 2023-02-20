//

#include <iostream>
#include <climits>

using namespace std;

class Methods
{
    public:
    void main_lesson()
    {
        int num1 {100};
        int num2 {200};
        
        cout << "100 + 200 = " << num1 + num2 << endl;
        cout << "100 - 200 = " << num1 - num2 << endl;
        cout << "100 * 200 = " << num1 * num2 << endl;
        cout << "200 / 100 = " << num2 / num1 << endl;
        cout << "200 / 100 = " << double(num1) / double(num2) << endl;
        cout << "200 % 100 = " << num2 % num1 << endl; // modulo operator gets the remainder this case its 0
        cout << "100 % 200 = " << num1 % num2 << endl; // remainder is 100
    
    }
    
    void EU_USD_CONVERSION()
    {
        const double usd_per_euro {1.19};
        double dollar {0};
        double euro {0};
        
        cout << "Hello, this is the euro to usd converter" << endl;
        cout << "Enter the value of Euro you want to convert" << endl;
        cin >> euro;
        dollar = euro*usd_per_euro;
        cout << euro << " Euro is equal to " << dollar << " USD" << endl;
        
    }
    void increment_decrement()
    {
        int counter {0};
        int result {0};
        
        result = (counter++) + 10; // two operations happened here 1. defining result 2. incrementing counter.
        cout << result << endl;
        
        counter = 0;
        result = 0;
        
        result = (++counter) + 10;
        cout << result << endl;
    }
};


int main(){
    
    Methods m_obj;
    m_obj.increment_decrement();
   
    
    
}


