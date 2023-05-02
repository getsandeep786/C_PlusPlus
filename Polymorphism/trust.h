#ifndef TRUST_H
#define TRUST_H
#include "Account.h"

class Trust : public Account
{
public:
    Trust();
    void withdraw(double amount);
    ~Trust();

};

#endif // TRUST_H
