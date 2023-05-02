#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include "pointersutilities.h"

using namespace std;

void PointersUtilities::declaringPointer(){
    
    char *str = "Sandeep";
    cout<< str << endl;
    cout<< *str << endl;
    cout<< *(str + 1) << endl;
    
    cout << "-----------------------------" << endl;

    int num{10};
    cout << "Value of num" << ":" << num << endl;
    cout << "Size of num" << ":" << sizeof num << " bytes" << endl;
    cout << "Memory Address of num" << ":" << &num << endl;
    cout << "-----------------------------" << endl;

    int *p;
    cout << "Value of p" << ":" << p << endl;
    cout << "Size of p" << ":" << sizeof p << endl;
    cout << "Memory Address of num" << ":" << &p << endl;
    p = nullptr;
    cout << "Value of p" << ":" << p << endl;
    cout << "-----------------------------" << endl;

    int *num_ptr{nullptr};
    num_ptr = &num;
    cout << "Value of num pointer(memory address where it is stored)" << ":" << num_ptr << endl;
    cout << "-----------------------------" << endl;

    //De-referencing a Pointer
    int score{100};
    int *score_ptr{&score};
    cout << *score_ptr << endl;

    *score_ptr = 200;
    cout << *score_ptr << endl;
    cout << score << endl;
    cout << "-----------------------------" << endl;

    vector<string> names{"Larry", "Moe", "John"};
    vector<string> *names_ptr{nullptr};

    names_ptr = &names;
    cout << "First Name: " << (*names_ptr).at(0) << endl;
    cout << "List all Names:" << endl;
    for (auto name: *names_ptr) {
        cout << name + " ";
    }
    cout << endl << "-----------------------------" << endl;

    //Dynamic Memory Allocation
    int *int_ptr{nullptr};
    int_ptr = new int; //allocate integer to heap
    cout << "Printing Pointer Memory Address: " << int_ptr << endl;
    cout << "Value of the integer stored in the memory address: " << *int_ptr << endl; //garbage data
    *int_ptr = 999;
    cout << "Value of the integer stored in the memory address: " << *int_ptr << endl;
    cout << endl << "-----------------------------" << endl;

    int intVar = {*int_ptr};
    cout << "Value of the pointer assigned variable: " << intVar << endl;
    cout << "Memory Address of the pointer assigned variable: " << &intVar
         << endl; // int intVar creates a new memory address in the Heap
    cout << endl << "-----------------------------" << endl;

    //Deallocating the pointer
    delete int_ptr;

    //Allocate an array of memory or allocate array to heap
    int *array_ptr{nullptr};
    int size{10};
    array_ptr = new int[size];
    delete[] array_ptr;
}

void PointersUtilities::relationshipArraysAndPointers(){
    int scores[]{100, 95, 89};
    cout << scores << endl;
    cout << *scores << endl;

    int *score_ptr{scores};
    cout << score_ptr << endl;
    cout << *score_ptr << endl;

    cout << *(score_ptr + 1) << score_ptr[1] << endl;
    cout << *(score_ptr + 2) << endl;
    cout << "-----------------------------" << endl;
}

void PointersUtilities::arithmeticPointer(){
    int scores[]{100, 98, 89, 55, -1};
    int *score_ptr{scores};
    while (*score_ptr != -1) {
        cout << "Values" << *score_ptr << endl;
        score_ptr++;
    }

    string s1{"Sandeep"};
    string s2{"Sandeep"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << (p1 == p2) << endl;
    cout << (p1 == p3) << endl;
    cout << (*p1 == *p2) << endl;
    cout << (*p1 == *p3) << endl;
}

void PointersUtilities::pointersConstant(){
     //Pointers to constants
    int high_score{100};
    int low_score{65};
    const int *score_ptr{&high_score};
//    *score_ptr = 86; // ERROR
    score_ptr = &low_score; //OK

    //Constant pointers
    int high_voltage{10};
    int low_voltage{1};
    int *const voltage_ptr{&high_score};
    *voltage_ptr = 230; //OK
//    voltage_ptr = &low_score; //ERROR

    //Constant Pointers to Constant
    int high_mark{10};
    int low_mark{1};
    const int *const mark_ptr{&high_score};
//    *mark_ptr = 86; // ERROR
//    mark_ptr = &low_score; //ERROR
}

void PointersUtilities::passPointersToFunction(){
    int value{10};
    int *value_ptr{nullptr};
    value_ptr = &value;
    cout << value << endl;
    double_data(&value);
    double_data(value_ptr);
    cout << value << endl;

    vector<string> names{"C", "+", "+"};
    vector<string> *names_ptr{&names};

    int score[] = {100, 120};
}

void PointersUtilities::returnPointersFromFunction(){
    int *my_array;
    my_array = create_array(100, 20);
    //use it
    delete[] my_array;
}

//Never do this
//int *dont_do_this(){
//    int size{};
//    return &size;
//}
//
//int *or_this(){
//    int size{};
//    int *size_ptr {&size};
//    return size_ptr;
//}