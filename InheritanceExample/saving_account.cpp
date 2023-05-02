#include <iostream>
#include "saving_account.h"

using namespace std;

Saving_Account::Saving_Account(): int_rate{3.0} {
}

Saving_Account::~Saving_Account()
{
}

void Saving_Account::deposit(double amount){
    cout << "Savings Money: " << amount << " is deposited" <<endl;
}

void Saving_Account::withdraw(double amount){
    cout << "Savings Money: " << amount << " is debited" <<endl;
}

