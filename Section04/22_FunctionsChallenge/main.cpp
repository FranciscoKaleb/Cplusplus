//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
void print(const vector<int> &arr);
bool yes_no(bool &proceed);
int get_max(vector<int> &arr );
int get_min(vector<int> &arr);
double get_average(vector<int> &arr);
void add_to_collection(vector<int> &arr);
int get_sum(vector<int> &arr);
vector<int> delete_member(vector<int> &arr);
vector<int> edit_member(vector<int> &arr);
void print_even_numbers(const vector<int> &arr);
void print_odd_numbers(const vector<int> &arr);
vector<int> arrange_ascending(vector<int> &arr);
vector<int> arrange_descending(vector<int> &arr);
void print_vertical_histogram(vector<int> &arr);

int main()
{
   cout << std::boolalpha;
   bool proceed {true};
   vector<int> collection {100, 31, 1, 12, 1, 54, 16, 11, 17};
   char choice {};
   while(proceed)
   {
       cout << "choose an operation to perform on this vector of integers" << endl;
       for (auto var: collection)
       {
           cout << var << " ";
       }
       cout << endl << endl 
       <<"a print all integers " << endl
       <<"b get maximum value within the collection " << endl
       <<"c get minimum value within the collection " << endl
       <<"d get average of the collection" << endl
       <<"e add a member to the collection" << endl 
       <<"f total sum" << endl
       <<"g delete a member" << endl
       <<"h edit a member" << endl
       <<"i get even numbers" << endl
       <<"j get odd numbers" << endl
       <<"k print histogram" << endl
       <<"l arrange ascending" << endl
       <<"m arrange descending" << endl;
       
       cin >> choice;
       switch(choice)
       {
         case 'a':
            print(collection);
            yes_no(proceed);
         break;
         case 'b':
            cout << get_max(collection) << endl;
            yes_no(proceed);
         break;
         case 'c':
            cout << get_min(collection) << endl;
            yes_no(proceed);
         break;
         case 'd':
            cout << get_average(collection) << endl;
            yes_no(proceed);
         break;
         case 'e':
            add_to_collection(collection);
            yes_no(proceed);
         break;
         case 'f':
            cout << get_sum(collection) << endl;
            yes_no(proceed);
         break;
         case 'g':
            delete_member(collection);
            yes_no(proceed);
         break;
         case 'h':
            edit_member(collection);
            yes_no(proceed);
         break;
         case 'i':
            print_even_numbers(collection);
            yes_no(proceed);
         break;
         case 'j':
            print_odd_numbers(collection);
            yes_no(proceed);
         break;
         case 'k':
            print_vertical_histogram(collection);
            yes_no(proceed);
         break;
         case 'l':
            arrange_ascending(collection);
            yes_no(proceed);
         break;
         case 'm':
            arrange_descending(collection);
            yes_no(proceed);
         break;
         default:
         cout << "out of range" << endl;
         break;
       }
   }
   
}
void print(const vector<int> &arr)
{
    for(auto var: arr)
    {
        cout << var << endl;
    }
}
bool yes_no(bool &proceed)
{
    char y_n {};
    cout << "would you like to continue? y/n" << endl;
    cin >> y_n;
    switch(y_n)
    {
       case 'y':
            proceed = true;
       break;
       case 'n':
            proceed = false;
            cout << "program end" << endl;
       break;
       default:
            proceed = false;
            cout << "program end" << endl;
       break;
    }
    return proceed;
}
int get_max(vector<int> &arr)
{
    
    int greater {};
    if(arr.size() == 1)
    {
        greater = arr[0];
        return greater;
    }
    if(arr.size() == 0)
    {
        cout << "vector is empty" << endl;
    }
    else
    {
        greater = arr[0];
        for(size_t i = 0; i < arr.size()-1; i++)
        {
            if(greater < arr[i+1])
            {
                
                
                cout << greater << " < " << arr[i+1] << " = " << (arr[i] < arr[i+1]) << endl;
                greater = arr[i+1];
            }
            else
            {
                cout << greater << " < " << arr[i+1] << " = " << (arr[i] < arr[i+1]) << endl;
            }
        }
        return greater;
    }
}
int get_min(vector<int> &arr)
{
    
    int lesser {};
    if(arr.size() == 1)
    {
        lesser = arr[0];
        return lesser;
    }
    else if(arr.size() == 0)
    {
        cout << "vector is empty" << endl;
    }
    else
    {
    
        lesser = arr[0];
        for(size_t i = 0; i < arr.size()-1; i++)
        {
            if(lesser > arr[i+1])
            {
                
                lesser = arr[i+1];
                cout << lesser << " < " << arr[i+1] << " = " << (arr[i] < arr[i+1]) << endl;
            }
            else
            {
                cout << lesser << " < " << arr[i+1] << " = " << (arr[i] < arr[i+1]) << endl;
            }
        }
        return lesser;
    }
}
double get_average(vector<int> &arr)
{
    double average {};
    double total {};
    for(size_t i = 0; i < arr.size(); i++)
    {
        total = total + arr[i];
    }
    average = (total/arr.size());
    return average;
}
void add_to_collection(vector<int> &arr)
{
    int value {};
    cout << "enter value to add" << endl;
    cin >> value;
    arr.push_back(value);
}
int get_sum(vector<int> &arr)
{
    int total {};
    for(size_t i = 0; i < arr.size(); i++)
    {
        total = total + arr[i];
    }
    return total;
}
vector<int> delete_member(vector<int> &arr)
{
    int num {};
    bool found {false};
    cout << "type the number you want to delete" << endl;
    cin >> num;
    for(size_t i = 0; i < arr.size(); i++)
    {
        if(arr[i] == num)
        {
           arr.erase(arr.begin()+i);
           cout << num << " is deleted from the collection " << endl;
           found = true;
        }
        if(i == arr.size()-1 && found == false)
        {
            cout << "Number does not exist in the collection" << endl;
        }
    }
    return arr;
}
vector<int> edit_member(vector<int> &arr)
{
    int num {};
    int new_val {};
    bool found {false};
    cout << "type the number you want to edit" << endl;
    cin >> num;
    cout << "type the new value" << endl;
    cin >> new_val;
    
    for(size_t i = 0; i < arr.size(); i++)
    {
        if(arr[i] == num)
        {
           cout << num << " is edited from the collection " << endl;
           arr[i] = new_val;
           found = true;
        }
        if(i == arr.size()-1 && found == false)
        {
            cout << "Number" << num <<" does not exist in the collection" << endl;
        }
    }
    return arr;
}
void print_even_numbers(const vector<int> &arr)
{
    for(auto mem : arr)
    {
        if(mem%2 == 0)
        {
            cout << mem << endl;
        }
    }
}
void print_odd_numbers(const vector<int> &arr)
{
    for(auto mem : arr)
    {
        if(mem%2 > 0)
        {
            cout << mem << endl;
        }
    }
}
vector<int> arrange_ascending(vector<int> &arr)
{
    //4 3 2 1
    //length = 4
    //
    int temp {};
    for(size_t i = 0; i < arr.size()-1; i++)// repeat length-1
    {
        for(size_t j = 0; j < arr.size()-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
               temp = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = temp;
            }
        }

    }
    return arr;
}
vector<int> arrange_descending(vector<int> &arr)
{
    //4 3 2 1
    //length = 4
    //
    int temp {};
    for(size_t i = 0; i < arr.size()-1; i++)// repeat length-1
    {
        for(size_t j = 0; j < arr.size()-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
               temp = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = temp;
            }
        }

    }
    return arr;
}
void print_vertical_histogram(vector<int> &arr)
{
    int n = arr.size();

    // Find the maximum element in the array
    int maximum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    // Iterate through each row
    for (int i = maximum; i >= 1; i--) {
        // Iterate through each element in the array
        for (int j = 0; j < n; j++) {
            // Print an asterisk if the element is greater than or equal to the current row
            if (arr[j] >= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}