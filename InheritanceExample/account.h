#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account
{
private:
    string acc_no;
    double balance;
public:
    //constructor
    Account();
    //methods
    //methods will be declared outside the class declaration
    void deposit(double amount);
    void withdraw(double amount);
    ~Account();

};

#endif // ACCOUNT_H
