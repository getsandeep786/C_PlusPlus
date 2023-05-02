#ifndef DYNAMICSAVINGS_H
#define DYNAMICSAVINGS_H
#include "DynamicAccount.h"


class DynamicSavings : public DynamicAccount
{
public:
    DynamicSavings();
    virtual void withdraw(double amount);
    virtual ~DynamicSavings();

};

#endif // DYNAMICSAVINGS_H
