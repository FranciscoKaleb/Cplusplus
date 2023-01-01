//

#include <iostream>
#include <climits>
#include <vector>
#include <thread>
#include <chrono>
#include <ctime> 
#include <cstdlib>

using namespace std;

class Examples
{
public:
    void Example_1() // printing the incremented variable
    {
        int i {0};
        
        for(i = 0; i <= 5; ++i )
        {
            cout << i << endl; // prints i six times from 0 - 5
        }
    }
    void Example_2() // looping through array of string
    {
        string arr[] {"Francisco","kaleb","marquez"};
        for(int i = 0; i < 3; i++) // prints array index 0 - 2
        {
            cout << arr[i] << endl;
        }
    }
    void Example_3() // using two variables "comma operator"
    {
        for(int i {1}, j {2}; i <= 5; i++, j++)
        {
            cout << i*j << endl;
        }
    }
    void Example_4() // endless loop
    {
        for(;;)
        {
            cout << "endless loop" << endl;
        }
    }
    void Example_5() // nested for loop
    {
        for(int i = 1; i <= 10; i++)
        {
            for(int j = 1; j <= 10; j++)
            {
                cout << i << " x " << j << " = " << i*j << endl;
            }
        }
    }
    void Example_6() // complicated nested for loop
    {
        bool increment {true};
        cout << boolalpha;
        for(;;)
        {
            if(increment == true)
            {
                for(int i = 1; i <= 10; i++)
                {            
                    for(int j = 1; j <= i; j++)
                    {
                        cout << j ;
                        if(j == 10)
                        {
                            increment = false;
                        }
                    }
                    cout << endl;
                }
            }
            if(increment == false)
            {
                for(int i = 10; i >= 1; i--)
                {            
                    for(int j = 1; j <= i; j++)
                    {
                        cout << j ;
                        if(j == 1)
                        {
                            increment = true;
                        }
                    }
                    cout <<  endl;
                }
            }
        }
    }
    void Example_7() // using vector .size()
    {
        vector<int> num {1,2,3,4,5};
        
        for(int i = 0; i < num.size(); i++)
        {
            cout << num[i]<< endl;
        }
    }
    void Example_8() // Range base loop. foreach loop equivalent in C#
    {
        char letters[] {'H', 'E', 'L', 'L', 'O'};
        
        for(char letter : letters ) // char 'letter' acts as a placeholder for every 'letters' index each iteration
        {
            cout << letter;
        }
    }
    void Example_9() 
    {
       /* for(;;)
        {
           cout << "hello" << endl;
           std::this_thread::sleep_for(chrono::milliseconds(1000));
          
        } */
        bool start_point = true;
        int first_second {0};
        int seconds {0};
        bool light {false};
        bool threshold {false};
        vector<double> temp_ave {};
        double sum_placeholder;
        
        for(;;)
            {
                time_t now = time(0);  // get the current time
                if(start_point == true)
                {
                    first_second = now;
                    start_point = false;
                }
                seconds = now - first_second;
                this_thread::sleep_for(chrono::milliseconds(1000));
                double num = rand() % 6 + 35;
                temp_ave.push_back(num);
                
                cout << seconds << ", temp in C: "<< num <<endl;
                
                
                if(seconds%10 == 0 && seconds != 0 && seconds%20 != 0)
                {
                    cout << "lights on" << endl;
                    light = true;
                }
                if(seconds%20 == 0 && seconds != 0)
                {
                    cout << "lights off" << endl;
                    light = false;
                }
                if(seconds%60 == 0 && seconds != 0)
                {
                    for(double ave : temp_ave){
                        sum_placeholder = sum_placeholder + ave;
                    }
                    
                    cout << "average temp for the minute = " << sum_placeholder/60 << endl;
                }
                
                
            }
    }
};

int main()
{
    //in for loop, increment triggers after the code executes
    Examples obj;
    obj.Example_9();
    
    
}