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
    void Example_1() // breaks when next index is less in value
    {
        vector<int> collection {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 10};
        for(auto num: collection)
        {
            
            if(collection[num] < collection[num-1])
            {
                cout << num << endl;
                break;
            }
            else
            {
                cout << num << endl;
            }
        }
    }

};

int main()
{
    
    Examples obj;
    obj.Example_1();
    
    
}