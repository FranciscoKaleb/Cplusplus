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
void BaseClassPointers();
void BaseClassReference();

int main()
{

    //BaseClassReference();
   
    
}

void BaseClassPointers()
{
    Account *new_acc = new Checking_Account("Kaleb", 40000);
    Account *new_acc2 = new Savings_Account("Francis", 40000, 0.06);
    Account *new_acc3 = new Trust_Account("Sam", 40000, 0.07);


    vector<Account*> sa_vec {}; // vector of Account pointers
    // equivalent of -- Account *account[] {}; - array of Account pointers
    
    sa_vec.push_back(new_acc);
    sa_vec.push_back(new_acc2);
    sa_vec.push_back(new_acc3);

    deposit(sa_vec, 1000);
    
    for(auto &account:sa_vec)
    {
        account->withdraw(1000);
    }
    
    
    new_acc2->add_interest(); // bypass interest trigger
    new_acc3->add_interest();
    
    cout << *new_acc << endl;
    cout << *new_acc2 << endl;
    cout << *new_acc3 << endl;
    
   // withdraw(sa_vec, 3000);
    
    delete new_acc;
    delete new_acc2;
    delete new_acc3;
}

void BaseClassReference()
{
   Checking_Account a{"kaleb",20000};
   
   withdraw(a, 1000);
   
   std::cout << a << std::endl;
}


