//
//

#include <iostream>
#include <climits>

using namespace std;

int main(){
    cout << "Sizeof information in bytes" << endl;
    cout <<"=====================" << endl;
    cout << "a character is " << sizeof(char) << " byte" <<  endl;
    cout << "a integer is "<< sizeof(int) << " bytes" << endl;
    cout << "a unsigned integer is "<< sizeof(unsigned int) << " bytes" << endl;
    cout << "a short is "<< sizeof(short) << " bytes" << endl;
    cout << "a long int is "<< sizeof(long) << " bytes" << endl;
    cout << "a long long int is "<< sizeof(long long) << " bytes" << endl;
    cout << "a float is "<< sizeof(float) << " bytes" << endl;
    cout << "a double is "<< sizeof(double) << " bytes" << endl;
    cout << "a long double is "<< sizeof(long double) << " bytes" << endl;
    
    //use values defined in climits
    
    cout << "Minimum values " << endl;
    cout << "char " << CHAR_MIN <<endl;
    cout << "int " << INT_MIN << endl;
    cout << "short " << SHRT_MIN << endl;
    cout << "long " << LONG_MIN << endl;
    cout << "long long " << LLONG_MIN << endl;
    
    cout << "Maximum values " << endl;
    cout << "char " << CHAR_MAX <<endl;
    cout << "int " << INT_MAX << endl;
    cout << "short " << SHRT_MAX << endl;
    cout << "long " << LONG_MAX << endl;
    cout << "long long " << LLONG_MAX << endl;
    
    // using sizeof in variables
    
    int age {24};
    cout << "age is " << sizeof(age) << " bytes" << endl; 
    
    
    
}