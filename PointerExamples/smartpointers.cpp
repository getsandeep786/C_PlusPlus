#include <iostream>
#include <memory> // smart pointers
#include <vector>
#include <string>
#include "smartpointers.h"
#include "test.h"
#include "a.h"
#include "b.h"

using namespace std;

void SmartPointers::unique_pointers(){
    unique_ptr<int> t1 = make_unique<int>(1000);
    Test *test_1 = new Test{1000}; //problem with raw pointers
    cout << "Value of test" << ":" << test_1->get_data() << endl;
    delete test_1; // if we use delete pointers only, then only object is deallocated from heap, or else will be available longer time(memory leaks).
    cout << "---------------------------------------------" << endl;

    //unique pointers
    unique_ptr<Test> smart_test1 = make_unique<Test>(999);
    cout << "Value of test" << ":" << smart_test1->get_data() << endl;
}

void SmartPointers::shared_pointers(){
    cout << "---------------------------------------------" << endl;
    {
        shared_ptr<int> p1 {new int {100}};
        cout << p1 << endl;
        *p1 = 200;
    } //when p1 goes out of scope, the int will be deallocated automatically because there is no other variable sharing the p1
    
    shared_ptr<int> p1 = make_shared<int>(999);
    cout << p1.get() << endl;
    cout << "reference_count: " << p1.use_count() << endl;
    shared_ptr<int> p2 {p1};
    cout << "reference_count: " << p1.use_count() << endl;
    p1.reset(); //decrement the use_count; p1 is nulled out
    cout << "reference_count: " << p1.use_count() << endl;
    cout << "reference_count: " << p2.use_count() << endl;
    //automatically deleted
    
    //custom deleter using a lambda funtion
    shared_ptr<Test> smart_test2(new Test{9999},
    [](Test *ptr){
        cout <<"\t Using my custom lambda deleter" <<endl;
        delete ptr;
    }
    );
}

void SmartPointers::weak_pointers(){
    cout << "---------------------------------------------" << endl;
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_B_to_A(b);
    b->set_A_to_B(a); //the descructor method is not called at all. There is a memory leak because of shared pointer's circular dependency
}

