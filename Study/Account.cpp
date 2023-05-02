#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(string name_val, double bal) : name{name_val}, balance{bal} { //This is initialization not assignment
}

void Account::set_balance(double bal){
    balance = bal;
}

double Account::get_balance(){
    return balance;
}

Account::~Account(){
    cout<< "Destructor is called to release memory" <<endl;
}
