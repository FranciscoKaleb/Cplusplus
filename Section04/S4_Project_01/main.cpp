#include <iostream> //responsible for cout and cin

//using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main() 
{
    
    int room_width {0};
    int room_length {0};    
    cout << "Enter the width of the room in ft: \n";
    cin >> room_width;
    cout << "Enter the length of the room in ft: \n";
    cin >> room_length;
    cout << "The area of the room is " << room_width*room_length;
    //return 0; d
}   

