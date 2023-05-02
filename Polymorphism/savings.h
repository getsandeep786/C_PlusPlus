#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"

class Savings : public Account
{
public:
    Savings();
    void withdraw(double amount);
    ~Savings();

};

#endif // SAVINGS_H
