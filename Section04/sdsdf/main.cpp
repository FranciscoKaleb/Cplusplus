//

#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cctype>

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
    void Example_1()
    {
        
    }
};

int main()
{
    
    Examples obj;
    obj.Example_1();
    
    
}