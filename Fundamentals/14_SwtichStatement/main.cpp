//

#include <iostream>
#include <climits>

using namespace std;

class Examples
{
public:
    void Example_1()
    {
        char choice {};
        cout << "Choose what path you want to choose:\na. Full Stack Dev \nb. Front End Developer \nc. Back End Developer  " << endl;
        cin >> choice;
        
        switch(choice)
        {
            case 'A':
            case 'a':
                cout << "that cool! I guess you want to have a hard time";
                break;
            case 'B':
            case 'b':
                cout << "Designing web pages is fun!!";
                break;
            case 'C':
            case 'c':
                {                    
                    cout << "Are you sure? y/n\n";
                    char y_n {};
                    cin >> y_n;
                    if(y_n == 'y' || y_n == 'Y')
                    {
                        cout << "you crazy";
                    }
                    else
                    {
                        cout << "guess you dont have the courage";
                    }
                }
                break;
            default:
                cout << "out of range";
        
        }
    }
    void Example_2()
    {
        enum Direction
        {
            left,
            right,
            up,
            down
        };
        
        Direction heading {right};
        
        switch(heading)
        {
            case left:
                cout << "going left";
                break;
            case right:
                cout << "going right";
                break;
            case up:
                cout << "going up";
                break;
            case down:
                cout << "going down";
                break;
            default:
                cout << "going nowhere";
        }
    }
};

int main()
{

    Examples obj;
    obj.Example_2();
    
}