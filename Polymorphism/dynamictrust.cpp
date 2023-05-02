#include <iostream>
#include "dynamictrust.h"

using namespace std;

DynamicTrust::DynamicTrust()
{
}

void DynamicTrust::withdraw(double amount){
    cout << "2 Derived class Dynamic Trust's withdraw: " << amount <<endl;
}

DynamicTrust::~DynamicTrust()
{
}

