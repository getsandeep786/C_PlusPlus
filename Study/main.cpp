#include <iostream>
#include "Account.h"

using namespace std;

void referenceFunction(int &x, int &y);

int main() {
    cout << "Size of Information" << endl;
    cout << "===================" << endl;
    
    cout << "char: "<< sizeof(char) <<" bytes." << endl;
    cout << "int: "<< sizeof(int) <<" bytes." << endl;
    cout << "unsigned int: "<< sizeof(unsigned int) <<" bytes." << endl;
    cout << "short: "<< sizeof(short) <<" bytes." << endl;
    cout << "long: "<< sizeof(long) <<" bytes." << endl;
    cout << "long long: "<< sizeof(long long) <<" bytes." << endl;
    cout << "float: "<< sizeof(float) <<" bytes." << endl;
    cout << "double: "<< sizeof(double) <<" bytes." << endl;
    
    //Account Object is within the scope, so when it goes out of the block or scope, the destructor is called. 
    {
        Account acc;
        cout<< acc.get_name() << acc.get_balance() << endl;
        acc.set_balance(10000);
        cout<< acc.get_balance() <<endl;
        acc.set_name("sandy");
        cout<< acc.get_name() <<endl;
        
        Account frank {"Frank"};
        cout<< frank.get_name() << frank.get_balance() << endl;

    }
    
    //Copy one object to another using copy constructor
    Account raj {"RajKumar", 18000};
    Account clone_raj {raj};
    
    Account account;
    Account *account_ptr = new Account();

    account.set_balance(10000);
    cout << account.get_balance() <<endl;

    (*account_ptr).set_balance(5555);
    cout << account_ptr->get_balance() <<endl;
//    (&account)->get_balance();

    int x{10}, y{20};
    cout << x << ":" << y << endl;
    referenceFunction(x, y); //call by reference

    { // This is a block scope

        // Code here CANNOT use x

        int x = 100;
        int y = 9000;

        // Code here CAN use x
        cout << x << ":" << y << endl;

    } // The block ends here


    return 0;
}

void referenceFunction(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << x << ":" << y << endl;
}