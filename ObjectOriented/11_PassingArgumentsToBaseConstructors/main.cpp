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
    vector<Savings_Account> sa_vec {};
    
    Savings_Account new_acc("Kaleb", 50000, 0.04);
    Savings_Account new_acc2("Francis", 6000, 0.04);
    Savings_Account new_acc3("Constantine", 70000, 0.04);
    Checking_Account new_acc4("Sam", 40000);
    Trust_Account new_acc5("Martin", 55000);
    
    /*sa_vec.push_back(new_acc);
    sa_vec.push_back(new_acc2);
    sa_vec.push_back(new_acc3);
    //sa_vec.push_back(new_acc4);
    //sa_vec.push_back(new_acc5);

    deposit(sa_vec,1000);
    display(sa_vec);*/
    
    new_acc5.withdraw(222000);
    new_acc5.withdraw(30000);
    new_acc5.withdraw(1000);
    new_acc5.withdraw(1000);
    new_acc5.withdraw(1000);
    new_acc5.withdraw(1000);
    cout << new_acc5 << endl;
    
}

void Example_1()
{
   
}

