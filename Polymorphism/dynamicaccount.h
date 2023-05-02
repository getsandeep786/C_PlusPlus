#ifndef DYNAMICACCOUNT_H
#define DYNAMICACCOUNT_H

class DynamicAccount
{
public:
    DynamicAccount();
//    virtual void withdraw(double amount) final; // cannot be overriden
    virtual void withdraw(double amount);
    virtual ~DynamicAccount();

};

#endif // DYNAMICACCOUNT_H
