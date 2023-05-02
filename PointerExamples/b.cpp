#include <iostream>
#include "b.h"
#include <memory>
using namespace std;

B::B()
{
    cout<< "B constructor called " << endl;
}

void B::set_A_to_B(shared_ptr<A> &a){
    a_ptr = a;
}

B::~B()
{
    cout<< "B destructor called " << endl;
}

