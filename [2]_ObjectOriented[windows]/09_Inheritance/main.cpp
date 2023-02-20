//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include <string.h>
#include "Account.h"
#include "Savings_Account.h"

void Example_1();
void Example_2();

int main()
{
    Example_1();
    Example_2();
}

void Example_1()
{
   cout << "========Account=========" << endl;
   Account acc {};
   acc.deposit(2000);
   acc.withdraw(500);
   cout << endl;
   
   Account *p_acc {nullptr};
   p_acc = new Account();
   p_acc->deposit(1000);
   p_acc->withdraw(500);
   delete p_acc;
   cout << endl;
}

void Example_2()
{
    cout << "========Savings Account=========" << endl;
    Savings_Account sav_acc {};
    sav_acc.deposit(3000);
    sav_acc.withdraw(400);
    cout << endl;
    
    Savings_Account *p_sav_acc {nullptr};
    p_sav_acc =  new Savings_Account();
    p_sav_acc->deposit(4000);
    p_sav_acc->withdraw(356);
    
    delete p_sav_acc;
}

