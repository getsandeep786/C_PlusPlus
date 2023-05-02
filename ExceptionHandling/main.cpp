#include <iostream>
#include "dividebyzeroexception.h"
#include "negativevalueexception.h"

using namespace std;

//Function Prototypes like Java interface
double calculate(int miles, int gallons);

int main() {
    std::cout << "Hello, Welcome to Exception Handling in C++ !!!" << std::endl;
    cout << "----------------------------------" << endl;
    cout << "Divided by Zero Example" << endl;
    int miles{};
    int gallons{};
    double result{};
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;
    try{
        result = calculate(miles, gallons);
    }catch(int &ex){
        cerr << "Sorry, you can't divide by zero" << endl; 
    }
    catch(string &ex){
        cerr << "Sorry, cannot process negative values in miles" << endl; 
    }
    catch(const NegativeValueException &ex){ //custom exception
        cerr << "Sorry, cannot process negative values in gallon" << endl; 
    }
    catch(...){
        cerr << "Unknown Exception" << endl; 
    }
    
    cout << "Result: " << result;

    return 0;
}

double calculate(int miles, int gallons) {
    if(gallons == 0)
        throw 0;
    else if(miles < 0)
        throw string{"Negative Value"};
    else if(gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles) / gallons;
}