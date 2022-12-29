/*

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
    
} */

#include <iostream>

using namespace std;

int main()
{
    int number_of_small_rooms {0};
    int number_of_large_room {0};
    double total {0};
    double total_estimate {0};
    double const price_of_small_room {25};
    double const price_of_large_room {35};
    double const tax_multiplier {0.06};
    int const days_valid {30};
    
    cout << "Hello, welcome to Kaleb's cleaning service" << endl;
    cout << "This is our pricing:" << endl;
    cout << "Small room: $" << price_of_small_room << endl;
    cout << "Large room: $" << price_of_large_room << endl;
    cout << "How many small rooms would you like to get cleaned?" << endl;
    cin >> number_of_small_rooms;
    cout << "How many large rooms would you like to get cleaned?" << endl;
    cin >> number_of_large_room;
    cout << "Number of small room: " << number_of_small_rooms << endl;
    cout << "Number of large room: " << number_of_large_room << endl;
    
    total = (number_of_small_rooms*price_of_small_room)+(number_of_large_room*price_of_large_room);
    
    cout << "Total: $" << total << endl;
    cout << "Tax: 6%" << endl;
    
    total_estimate = total + total*tax_multiplier;
    
    cout << "Total estimate: $" 
    << total_estimate << endl;
    cout << "This estimate is valid for " << days_valid << endl;
    
}