#include <iostream>

using namespace std;

int cat_age {0}; //this is a global variable

int main(){
    
    cat_age = 3;
    cout << "my cat is " << cat_age << " years old";
    
}