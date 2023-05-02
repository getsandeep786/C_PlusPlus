#include <iostream>
#include "savings.h"

using namespace std;

Savings::Savings()
{
}

void Savings::withdraw(double amount){
    cout << "1 Derived class Saving's withdraw: " << amount <<endl;
}

Savings::~Savings()
{
}

