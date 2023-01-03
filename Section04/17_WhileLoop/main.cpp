//

#include <iostream>
#include <climits>
#include <thread>
#include <vector>


using namespace std;

class Examples
{
public:
    void Print_delay(string words)
    {
            int i {0};
            while(i < words.length())
            {
                cout << words[i];
                this_thread::sleep_for(chrono::milliseconds(50));
                i++;
            }
        }
    void Example_1() //printing integers 0-5
    {
        int i {0};
        
        while(i <= 5)
        {
            cout << i << endl;
            i++;
        }
    }
    void Example_2() //printing even number 1-10
    {
        int i {0};
        while(i <= 10)
        {
            if(i%2 == 0)
            {
                cout << i << endl;
            }    
            i++;
        }
    }
    void Example_3() //printing array index
    {
        int arr[] {1, 78, 99};
        int i {0};
        
        while(i < 3)
        {
            cout << arr[i] << endl;
            i++;
        }
    }
    void Example_4() // code repeats until condition is met
    {
        int value {101};
        
        while (value >= 100) 
        {
            cout << "Enter a value less than 100" << endl;
            cin >> value;
        }
        cout << "Thats right" << endl;
    }
    void Example_5()
    {
        int value {0};
        
        while(value >= 5 || value <= 1)
        {
            cout << "Enter a value between 1 and 5" << endl;
            cin >> value;
        }
        cout << "Loop ends" << endl;
    }
    void Example_6() //code repeats as long as condition is met
    {
        int value {1000};
        int input {0};
        
        while(input < value)
        {
            cout << "Enter an integer less than :" << value << endl;
            cin >> input;
            
            if(input > value)
            {
                cout << "Loop ends here" << endl; 
            }
            else
            {
                value = input;
                input = 0;
            }
            
        }
    }
    void Example_7() // code repeats as long as condition is met
    {
        int input {901};
        int upper_limit {1000};
        int lower_limit {900};
        
        while(input < upper_limit && input > lower_limit)
        {
            cout << "Enter a value between " << upper_limit << " and " << lower_limit << endl;
            cin >> input;
            
            if(input > upper_limit || input < lower_limit)
            {
                cout << "loops ends here" << endl;
            }
            else
            {
                upper_limit = input;
                lower_limit = upper_limit - 100;
                input  = upper_limit - 1;
            }
        }
    }
    void Example_8() // countdown
    {
        int end_point {0};
        int i {0};
        
        cout << "Enter an integer to count up to" << endl;
        cin >> end_point;
        
        while(i <= end_point)
        {
            cout << i << " ";
            this_thread::sleep_for(chrono::milliseconds(100));
            i++;
            if(i%11 == 0 && i != 0)
            {
                cout << endl;
            }
        }
        
    }
    void Example_9() // type string // new getline(cin, input)
    {
        string input {""};
        cout << "type your string" << endl;
        getline(cin, input);
        int i {0};
        
        
        while(i < input.length())
        {
            cout << input[i];
            this_thread::sleep_for(chrono::milliseconds(100));
            i++;
        }
        
    }
    void Example_10()
    { 
        vector<int> collection {1, 2, 3, -5, 109, 44, -76,};
        int index {0};
        int count {0};
        
        while(index < collection.size() && collection[count] != 109)
        {
            cout << collection[index] << endl;
            index ++;
            count ++;
        }
        cout << count;
        
    }
    void Example_11() // Do while loop
    {
        int number {0};
        
        do
        {
            cout << "do while loop";
        }
        while(number != 0);
        
        while((number != 0))
        {
            cout << "while loop";
        }
    }
};

int main()
{
    //while loop stops when while(false)
    //continues when while (true) 
    Examples obj;
    obj.Example_11();
    
    
}