#include <iostream>

using namespace std;

int main(){
    
    //character type
    char middle_initial {'C'};
    cout << "my middle initial is " << middle_initial << endl;
    
    //integer types
    unsigned short int exam_score {55}; //unsigned means it cannot be negative
    cout << "my exam score is " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There was " << countries_represented << " countries represented" <<endl;
    
    long people_in_philippines {100'000'000};
    cout << "There are " << people_in_philippines << " people in the Philippines" <<endl;
    
    long long people_in_the_world {7'000'000'000};
    cout << "There are " << people_in_the_world << " people in the world" << endl;
    
    //floating point types
    float my_car_payment {405.3};
    cout <<"My car payment is " << my_car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi: " << pi << endl;
    
    long double large_amount {1.2e120};
    cout << "Large number: " << large_amount *2 << endl;
    
    //boolean type
    
    bool game_over {false};
    cout << "the value of game over is " << game_over << endl;
    
    //overflow example
    short value1 {30'000};
    short value2 {1'000};
    short product {value1*value2};
    
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
}