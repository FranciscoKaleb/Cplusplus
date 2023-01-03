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
                        this_thread::sleep_for(chrono::milliseconds(10));
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
                        this_thread::sleep_for(chrono::milliseconds(10));
                    }
                    cout <<  endl;
                }
            }
        }
    }
    void Example_7() // using vector .size()
    {
        vector<int> num {1,2,3,4,5};
        
        for(size_t i = 0; i < num.size(); i++)
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
    void Example_9() // complicated sample of range base forloop 
    {
       /* for(;;)
        {
           cout << "hello" << endl;
           std::this_thread::sleep_for(chrono::milliseconds(1000));
          
        } */
        bool start_point = true;
        int first_second {0};
        int seconds {0};
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
                
                //=================================================================================//
                
                if(seconds%10 == 0 && seconds != 0 && seconds%20 != 0)
                {
                    cout << "lights on" << endl;
                }
                if(seconds%20 == 0 && seconds != 0)
                {
                    cout << "lights off" << endl;
                }
                if(seconds%60 == 0 && seconds != 0)
                {
                    for(double ave : temp_ave){
                        sum_placeholder = sum_placeholder + ave;
                    }
                    
                    cout << "average temp for the minute = " << sum_placeholder/60 << endl;
                }
               //=================================================================================// 
                
            }
    }
    void Example_10()
    {
        int vector_size {0};
        vector<int> vec {};
        int place_holder {0};
        
        cout << "How many data items do you have?" << endl;
        cin >>  vector_size;
        
        for(int i = 0; i <  vector_size; i++)
        {
            cout << "Enter data item number " << i+1 << ": " << endl;
            cin >> place_holder;
            vec.push_back(place_holder);
        }
        
        cout << "Displaying histogram: " << endl;
        
        for(int i = 0; i < vector_size; i++)
        {
            for(int j = 0; j < vec[i] ; j++){
                cout << "-";
            }
            cout << endl;
        }
        
        
    }
    void Challenge() // my solution
    {
        /*
            Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), 
            (4,6), (4,8), and (6,8) .
            So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .
            If the vector is empty or has only 1  element then the result  should be 0 .
         */
         
         vector<int> vec {2,4,6,8};
         int sum {0};
         
         if(vec.size() <= 1)
         {
             sum = 0;
         }
         else
         {
             for(size_t i = 0; i < vec.size()-1; i ++)
             {
                 for(size_t j = vec.size()-1, k = i + 1; j > i ; j--,k++)
                 {
                     sum = sum + (vec[i] * vec[k]);
                     cout << "(" << vec[i] << "*" << vec[k] << ") ";
                 }
                 cout << i << endl;
             }
             cout << "sum:" << sum << endl;
         }
         
    }
    void Challenge_2() // instructors solution
    {
        vector<int> vec {2,4,6,8};
        int sum {0};
        
        for(size_t i = 0; i < vec.size()-1; i ++)
        {
             for(size_t k = i + 1; k < vec.size() ; k++)
             {
                 sum = sum + (vec[i] * vec[k]);
                 cout << "(" << vec[i] << "*" << vec[k] << ") ";
             }
             cout << endl;
        }
        cout << "sum:" << sum << endl;
    }
    void Challenge_3()
    {
        char choice {};
        vector<int> list{1, -200, 44, -6, 55, -104, 4, 9, -17};
        int num {0};
        int sum {0};
        int smallest {0};
        int largest {0};
        bool has_duplicate {false};
        
        cout << "P - print numbers" << endl;
        cout << "A - add a number" << endl;
        cout << "M - display mean of the numbers" << endl;
        cout << "S - display the samllest number" << endl;
        cout << "L - display the largest number" << endl;
        cout << "D - no duplicate entry" << endl;
        cout << "Q - quit" << endl;
        cout << "================================" << endl;
        
        cin >> choice;
        switch(choice)//pamslq
        {
            case 'p':
            case 'P':
                if(list.size() > 0)
                {
                     for(auto var:list)
                        {
                            cout << var << endl;
                        }   
                }
                else
                {
                        cout << "[] - the list is empty";
                }
                
            break;
            
            case 'a':
            case 'A':
                cout << "Add a number: " << endl;
                cin >> num;
                list.push_back(num);
                cout << num << " was added";
            break;
            
            case 'm':
            case 'M':
                if(list.size() == 0)
                {
                    cout << "unable to calculate the mean - no data" << endl;
                }
                else
                {
                    for(auto var : list)
                    {
                        sum = sum + var;
                    }
                    cout << sum/list.size();
                }
                
            break;
            case 's':
            case 'S':
                if(list.size() == 0)
                {
                    cout << "unable to determine smallest number - list is empty" << endl;
                }
                else
                {
                    for(size_t i = 0; i < list.size()-1; i++) // repeats iteration 8 times 
                    {
                        if(i == 0) // compare index 0 and index 1 at first iteration
                        {
                            if(list[i] < list[i+1])
                            {
                                smallest = list[i];
                                cout << list[i] << " < " << list[i+1] << endl;
                            }
                            else
                            {
                                smallest = list[i+1];
                            }
                            
                        }
                        else // comparing the smaller number between [0] and [1] to index 2
                        {
                            if(smallest < list[i+1])
                            {
                                cout << smallest << " < " << list[i+1] << endl;
                            }
                            else
                            {
                                cout << smallest << " < " << list[i+1] << endl;
                                smallest = list[i+1];
                                
                            }
                        }
                        
                    }
                    cout << "smallest number is " << smallest << endl;
                }
                
                
            break;
            case 'l':
            case 'L':
                if(list.size() == 0)
                {
                    cout << "unable to determine the largest number - list is empty" << endl;
                }
                else
                {
                    for(size_t i = 0; i < list.size() - 1; i++ ) // repeat iteration (vector.size() - 1) times// 8 times in our case
                    {
                        if(i == 0)
                        {
                            if(list[i] > list[i+1])
                            {
                                cout << list[i] << " > " << list[i+1] << endl;
                                largest = list[i];
                                
                            }
                            else
                            {
                                cout << list[i] << " > " << list[i+1] << endl;
                                largest = list[i+1];
                                
                            }
                        }
                        else
                        {
                            if(largest > list[i+1])
                            {
                                cout << largest << " > " << list[i+1] << endl;
                            }
                            else
                            {
                                cout << largest << " > " << list[i+1] << endl;
                                largest = list[i+1];
                                
                            }
                        }
                    }
                    cout << largest;
                }
            break;
            case 'd':
            case 'D':
                cout << "Enter a number" << endl;
                cin >> num;
                for(auto var : list)
                {
                    if(num == var)
                    {
                        has_duplicate = true;
                    }
                }
                if(has_duplicate == true)
                {
                    cout << "cannot add duplicate" << endl;
                }
                else
                {
                    list.push_back(num);
                    cout << num << " added" << endl;
                }
            break;
            case 'q':
            case 'Q':
                cout << "Goodbye!" << endl;
            break;
            default:
                
            break;
        }
        
        
    }
};

int main()
{
    //in for loop, increment triggers after the code executes
    Examples obj;
    obj.Challenge_3();
    
    
}