#include <iostream>
#include "dynamicaccount.h"

using namespace std;

DynamicAccount::DynamicAccount()
{
}

void DynamicAccount::withdraw(double amount){
    cout << "Base class withdraw: " << amount <<endl;
}

DynamicAccount::~DynamicAccount()
{
}

