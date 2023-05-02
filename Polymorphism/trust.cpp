#include <iostream>
#include "trust.h"

using namespace std;

Trust::Trust()
{
}

void Trust::withdraw(double amount){
    cout << "2 Derived class Trust's withdraw: " << amount <<endl;
}

Trust::~Trust()
{
}

