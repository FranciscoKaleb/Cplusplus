#ifndef UTILITIES_H
#define UTILITIES_H
#include "Account.h"
#include <vector>

// global functions - outside a class
    void deposit(std::vector<Account*> &accounts, double amount);
    void withdraw(std::vector<Account*> &accounts, double amount);
    void display(const std::vector<Account*> &accounts);
    


#endif // UTILITIES_H
