#ifndef DYNAMICTRUST_H
#define DYNAMICTRUST_H
#include "DynamicAccount.h"

class DynamicTrust : public DynamicAccount
{
public:
    DynamicTrust();
    virtual void withdraw(double amount);
    virtual ~DynamicTrust();

};

#endif // DYNAMICTRUST_H
