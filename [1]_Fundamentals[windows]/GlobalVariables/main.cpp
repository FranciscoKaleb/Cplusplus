#include <iostream>

using namespace std;

int cat_age {0}; //this is a global variable and {} is initializing value for cat_age

int main(){

    cat_age = 3; // assigning value to cat_age using '=' operator
    cout << "my cat is " << cat_age << " years old";

}