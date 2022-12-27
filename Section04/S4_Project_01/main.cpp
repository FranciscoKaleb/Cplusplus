#include <iostream> //responsible for cout and cin


int main() 
{
    
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100 \n";
    std::cin >> favorite_number;
    std::cout << "Amazing thats my favorite number too \n";
    std::cout << "no really " << favorite_number << " is my favorite number!" << std::endl;
    
    //return 0;
}

