#include <iostream>

using namespace std;

int main(){
    int length = 0; //first way to initialize C type initialization
    int width (0);  //second constructor type 
    int height {0}; //c++ 11 type
    
    cout << "to get the volume of a rectangular container give the following number." << endl;
    cout << "length: ";
    cin >> length;
    cout << "width: ";
    cin >> width;
    cout << "height: ";
    cin >> height;
    cout << "The volume of the container is " << length*width*height << " cubic unit";
}