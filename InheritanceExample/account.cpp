#include <iostream>
#include "Account.h"

using namespace std;

Account::Account() : acc_no{"057312576"}, balance{0.0}{
}

void Account::deposit(double amount){
    cout << "Money: " << amount << " is deposited in acc_no : " << acc_no <<endl;
}

void Account::withdraw(double amount){
    cout << "Money: " << amount << " is debited from acc_no : " << acc_no <<endl;
}

Account::~Account(){
    cout << "Destructor is called to release memory" << endl;
}

