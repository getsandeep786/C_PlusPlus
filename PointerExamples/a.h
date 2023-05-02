#ifndef A_H
#define A_H
#include <memory> // smart pointers
#include "b.h"

class B;

using namespace std;

class A
{

private:
    shared_ptr<B> b_ptr;

public:
    A();
    void set_B_to_A(shared_ptr<B> &b);
    ~A();

};

#endif // A_H
