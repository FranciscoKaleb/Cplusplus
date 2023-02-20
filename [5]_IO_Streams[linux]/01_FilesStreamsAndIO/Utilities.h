#ifndef UTILITIES_H
#define UTILITIES_H
#include "Account.h"
#include <memory>
#include <vector>

// global functions - outside a class
    void deposit(std::vector<Account*> &accounts, double amount);
    void withdraw(std::vector<Account*> &accounts, double amount);
    void display(const std::vector<std::unique_ptr<Account>> &accounts);
    


#endif // UTILITIES_H
