//

#include <iostream>
#include <climits>

using namespace std;

int main(){
    //pseudo code
    //1. prompt user to enter no. of rooms
    //2. display the number of rooms the user entered
    //3. calculate the price per room
    //4. show total cost and tax
    
    
    int number_of_rooms {0};
    double const price_per_room = 30.0;
    float const tax_multiplier = 0.06;
    int const days_valid = 30;
    
    cout << "Hello!, welcome to Kaleb's cleaning service." << endl;
    cout << "How many rooms would you like to get cleaned?" << endl;
    cin >> number_of_rooms;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room*number_of_rooms << endl;
    cout << "Tax: $" <<price_per_room*number_of_rooms*tax_multiplier << endl;
    cout << "=============================" << endl;
    cout << "Total estimate: $" << (price_per_room*number_of_rooms) + (price_per_room*number_of_rooms*tax_multiplier) << endl;
    cout << "This estimate is valid for " << days_valid << " days" << endl;
    cout << endl;
    
    //refactoring code modifying code without chaing behavior
    
}