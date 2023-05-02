#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H
#include <iostream>

using namespace std;

class CustomException: public exception
{
public:
    CustomException() noexcept = default;
    ~CustomException() = default;
    virtual const char* what() const noexcept {
        return "Any Custom Exception Message";
    }

};

#endif // CUSTOMEXCEPTION_H
