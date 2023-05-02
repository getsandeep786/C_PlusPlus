#include <iostream>
#include "dynamicsavings.h"

using namespace std;

DynamicSavings::DynamicSavings()
{
}

void DynamicSavings::withdraw(double amount){
    cout << "1 Derived class Dynamic Saving's withdraw: " << amount <<endl;
}

DynamicSavings::~DynamicSavings()
{
}

