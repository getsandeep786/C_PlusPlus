#ifndef POINTERSUTILITIES_H
#define POINTERSUTILITIES_H

#include <string>

using namespace std;

class PointersUtilities
{
public:
    void declaringPointer();
    void relationshipArraysAndPointers();
    void arithmeticPointer();
    void pointersConstant();
    void passPointersToFunction();
    void returnPointersFromFunction();
    
    void double_data(int *pInt) {
        *pInt = *pInt + 10;
    }
    
    int *create_array(size_t size, int init_value) {
        int *newStorage{nullptr};
        newStorage = new int[size];
        for (size_t i{0}; i < size; i++) {
            *(newStorage + i) = init_value;
        }
        return newStorage;
    }

};

#endif // POINTERSUTILITIES_H
