//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"


int main()
{
    
    vector<Account*> sa_vec {};
    
    Account *new_acc4 = new Checking_Account("Sam", 40000);

    sa_vec.push_back(new_acc4);

    deposit(sa_vec, 1000);
    
    cout << *new_acc4 << endl;

    
}

void Example_1()
{
   
}

