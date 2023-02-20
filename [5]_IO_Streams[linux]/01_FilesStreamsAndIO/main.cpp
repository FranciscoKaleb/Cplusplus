//
using namespace std;
#include <iostream>
#include <vector>
#include <memory>

#include "Trust_Account.h"
#include "Checkingz_Account.h"
#include "Utilities.h"

void Example_1();
void Example_2();
void Example_3();
void Example_4();
void Example_5();
void Example_6();



int main()
{
     Example_6();
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
    //display(acc_vec);
}

void Example_3()
{
    Account *acc = new Trust_Account("",10000, 0, 0.05, 3, 0.1);
    acc->deposit(500);
    acc->deposit(500);
    acc->deposit(500);
    acc->display_history();
}

void Example_4() // unique pointer on display() utility
{
    unique_ptr<int> p1 {new int {100}};
     cout << *p1 << endl;
     
     unique_ptr<int> p2 = make_unique<int>(1000);
     cout << *p2 << endl;
     
     unique_ptr<Account> a1 = make_unique<Trust_Account>("Kaleb",10000, 0, 0.05, 3, 0.1);
     a1->display();
     
     std::vector<std::unique_ptr<Account>> unique_ptr_vec;
     unique_ptr_vec.push_back(make_unique<Trust_Account>("Kaleb",10000, 0, 0.05, 3, 0.1));
     unique_ptr_vec.push_back(make_unique<Savings_Account>("Kaleb", 1000, 0, 0.05));
     unique_ptr_vec.push_back(make_unique<Checkings_Account>("Kaleb", 1000, 0, 0.05));
     display(unique_ptr_vec);
}

void Example_5() // Shared pointer
{
    shared_ptr<Account> acc1 = make_shared<Trust_Account>("Kaleb",10000, 0, 0.05, 3, 0.1);
    shared_ptr<Account> acc2 = make_shared<Savings_Account>("Francisco", 15000, 0, 0.06);
    shared_ptr<Account> acc3 = make_shared<Checkings_Account>("Marquez", 20000, 0, 1.5);
     
     vector<shared_ptr<Account>> vec;
     vec.push_back(acc1);
     vec.push_back(acc2);
     vec.push_back(acc3);
     
     for(auto &accounts:vec)
     {
         cout << *accounts << endl;
         cout << accounts.use_count() << endl;
     }
}

void Example_6() // Exception 
{
    try 
    {
        unique_ptr<Account> moes_account = make_unique<Checkings_Account>("Moe",-10,0,4);
        cout << "Moes Account" << endl;
    }
    catch(const IllegalBalanceException &ex)
    {
        cout << "Coudnt create account, negative balance" << endl;
    }
    
    cout << "program completed successfully" << endl;
}