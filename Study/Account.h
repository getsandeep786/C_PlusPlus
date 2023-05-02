#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account
{
private:
    //attributes
    string name;
    double balance;

public:

    //constructors used for initializing the current instance variable
    Account(string name = "sandeep", double balance = 10.05);
    //methods
    //methods will be declared outside the class declaration
    void set_balance(double bal);
    double get_balance();
    
    //methods declared inside the class declaration
    void set_name(string current_name){
        name = current_name;
    }
    
    string get_name(){
        return name;
    }
    
    //destructor is used for releasing the memory and other resources
    ~Account();

};

#endif // ACCOUNT_H
