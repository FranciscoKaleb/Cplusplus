//

#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cstring> // for c style function
#include <cctype> //  for character based function
#include <cstdlib> // 
#include <string> // c++ string type

using namespace std;

class Examples
{
public:
    void Print_delay(string words)
    {
        size_t i {0};
        while(i < words.length())
        {
            cout << words[i];
            this_thread::sleep_for(chrono::milliseconds(50));
            i++;
        }
    }
        char first_name[50] {};
        char last_name[50] {};
        char full_name[50] {};
        char temp[50] {};
        
    void Example_1() // using strlen() that returns strings length/size()
    {
        
        
        cout << "Enter your first name " << endl;
        cin >> first_name;
        cout << "Enter your last name" << endl;
        cin >> last_name;
        
        cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
        cout << "And your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;
     }
    void Example_2() // using strcpy() and strcat()    copy and concatenate
    {
        cout << "Enter your first name " << endl;
        cin >> first_name;
        cout << "Enter your last name" << endl;
        cin >> last_name;
        
        cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
        cout << "And your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;
        strcpy(full_name, first_name); // full_name = "francisco"
        strcat(full_name, " ");
        strcat(full_name, last_name);
        cout << "your full name is " << full_name << endl;
    }
    void Example_3() // using cin.getline(string, length) instead of cin >>
    {
        cout << "Enter your full name " << endl;
        cin.getline(full_name,50);
        cout << "your full name is " << full_name << endl;
    }
    void Example_4() // using strcmp(string, string2) and toupper()
    {
        //Print_delay()
        Print_delay("Enter your full name ");
        cout << endl;
        cin.getline(full_name, 50);
        Print_delay("your full name is ");
        Print_delay(full_name);
        cout << endl;
        
        strcpy(temp, full_name);
        if(strcmp(full_name,temp) == 0)
        {
                cout << temp << " is the same as " << full_name << endl;
        }
        else
        {
            cout << temp << " is different from " << full_name << endl;
        }
        
        for(size_t i = 0; i < strlen(full_name) ; i++)
        {
            if(isalpha(full_name[i]))
            {
                full_name[i] = toupper(full_name[i]);
            }
        }
        cout << endl << endl <<"we just turned it biggerrrr >>> " << endl << full_name << endl;
        
    }
    void Example_5() // Exercise 
    {
        
    }
    void Example_6()
    {
        
    }


};

int main()
{
    // C type string data type is char
    // C type strings are 1D array of char thats why they are declared as 'char name [x] {}'
    // we cant use "name " + " last name" to C style string we must use strcat(name, last_name);
    
    // c++ strings data type is string
    // c++ strings are what used in java, c#, javascript 'string name {}' no need for [] used in array
    // we use + sign to concatenate string in c++ type "name" + " last_name"
    // useful string methods  
    
    //find(string, start index) 
    //erase(start, end)
    //clear()
    //length()
    Examples obj;
    obj.Example_6();
}
