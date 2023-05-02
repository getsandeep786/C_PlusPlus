#include <iostream>
#include "pointersutilities.h"
#include "smartpointers.h"

using namespace std;

int main() {
    cout << "Hello, Pointers!!!" << std::endl;

    PointersUtilities p_utilities;
    p_utilities.declaringPointer();
    p_utilities.relationshipArraysAndPointers();
    p_utilities.arithmeticPointer();
    p_utilities.pointersConstant();
    p_utilities.passPointersToFunction();
    p_utilities.returnPointersFromFunction();
    
    cout << "---------------------------------------------" << endl;
    
    cout << "Hello, Smart Pointers!!!" << std::endl;

    SmartPointers smart_pointers;
    smart_pointers.unique_pointers();
    smart_pointers.shared_pointers();
    smart_pointers.weak_pointers();
    
    return 0;
}