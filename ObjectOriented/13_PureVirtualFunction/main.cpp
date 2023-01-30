//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include "Account.h"
// a class with only virtual function is an abstract class and cant be instantiated

class Savings_Account: public Account
{
private:
protected:
public:
    void deposit() override
    {
        std::cout << "Savings account deposit " << std::endl;
    }
};

int main()

{
    Account acc; // would cause error
    Savings_Account acc2;
    acc2.deposit();
}



