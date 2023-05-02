#include <iostream>
#include "a.h"
#include <memory>

using namespace std;

A::A()
{
    cout<< "A constructor called " << endl;
}

void A::set_B_to_A(shared_ptr<B> &b){
    b_ptr = b;
}

A::~A()
{
    cout<< "A destructor called " << endl;
}

