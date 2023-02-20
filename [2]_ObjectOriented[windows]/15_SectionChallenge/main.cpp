//
using namespace std;
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checkingz_Account.h"
#include "Utilities.h"

void Example_1();
void Example_2();

int main()
{
    Account *acc = new Trust_Account("",10000, 0, 0.05, 3, 0.1);
    acc->deposit(500);
    acc->deposit(500);
    acc->deposit(500);
    acc->display_history();
}

void Example_1()
{
    Account *acc = new Trust_Account("",10000, 0, 0.05, 3, 0.1);
    acc->deposit(1000);
    acc->withdraw(900);
    acc->withdraw(900);
    acc->withdraw(900);
}

void Example_2()
{
    vector<Account*> acc_vec {};
    Account *acc1 = new Savings_Account("Kaleb", 1000, 0, 0.05);
    Checkings_Account *acc2 = new Checkings_Account("Francisco", 1000, 0, 1.5);
    Trust_Account *acc3 = new Trust_Account("Marquez", 1000, 0, 0.07, 3, 0.1);
    
    acc_vec.push_back(acc1);
    acc_vec.push_back(acc2);
    acc_vec.push_back(acc3);
    
    deposit(acc_vec, 100);
    cout << endl;
    display(acc_vec);
}

