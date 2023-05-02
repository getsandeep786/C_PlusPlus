#ifndef B_H
#define B_H
#include "a.h"
#include <memory> // smart pointers

using namespace std;

class A; //forward declaration: // to say compiler that we are using class A in class B

class B
{
private:
//  shared_ptr<A> a_ptr;
    weak_ptr<A> a_ptr; //make weak to break the strong circular reference
    
public:
    B();
    void set_A_to_B(shared_ptr<A> &a);
    ~B();

};

#endif // B_H
