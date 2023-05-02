#include <iostream>
#include "account.h"

using namespace std;

Account::Account()
{
}

void Account::withdraw(double amount){
    cout << "Base class withdraw: " << amount <<endl;
}

Account::~Account()
{
}

