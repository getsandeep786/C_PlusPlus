#include <iostream>
#include "test.h"

using namespace std;

Test::Test() : data{0} { //This is initialization not assignment
    cout<< "Test Constructor (" << data << ")" << endl;
}

Test::Test(int data) : data{data} { //This is initialization not assignment
    cout<< "Test Constructor (" << data << ")" << endl;
}

int Test::get_data() const{
    return data;
}

Test::~Test()
{
    cout<< "Test Destructor (" << data << ")" << endl;
}

