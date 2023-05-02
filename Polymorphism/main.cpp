#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Trust.h"
#include "DynamicAccount.h"
#include "DynamicSavings.h"
#include "DynamicTrust.h"

using namespace std;

int main() {
    cout << "Hello, Static vs Dynamic Polymorphism !!!" << endl;
    Account *acc = new Account();
    Account *sav = new Savings();
    Account *trust = new Trust();
    
    acc->withdraw(1000);
    sav->withdraw(1000);
    trust->withdraw(1000);
    
    cout << "----------------------------------" << endl;
    
    DynamicAccount *dynamic_acc = new DynamicAccount();
    DynamicAccount *dynamic_sav = new DynamicSavings();
    DynamicAccount *dynamic_trust = new DynamicTrust();
    
    dynamic_acc->withdraw(1000);
    dynamic_sav->withdraw(1000);
    dynamic_trust->withdraw(1000);

    delete acc;
    delete sav;
    delete trust;
    delete dynamic_acc;
    delete dynamic_sav;
    delete dynamic_trust;

    return 0;
}