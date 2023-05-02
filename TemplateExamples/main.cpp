#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

//Function Templates

template <typename T>
T minNumber(T x, T y){
    return (x < y) ? x : y;
}

template <class T>
T maxNumber(T x, T y){
    return (x > y) ? x : y;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    cout << a << " " << b << endl;
}

struct Person{
    string name;
    int age;
    bool operator<(const Person &rhs) const{
        return this-> age < rhs.age;
    } 
};

//Class Template
template<typename T1, typename T2>
struct My_Pair{
    T1 first;
    T2 second;  
};

int main() {
    std::cout << "Hello, Template Classes and Functions!!!" << std::endl;
    
    //Function Template Examples
    cout << minNumber<int>(2,3) << endl;
    cout << minNumber<double>(5.5, 3.9) << endl;
    cout << minNumber(15.5, 13.9) << endl;
    cout << maxNumber(15.5, 13.9) << endl;

    Person p1{"Curly", 50};
    Person p2{"Joe", 30};
    Person p3 = minNumber(p1, p2);
    cout << p3.name << endl;
    
    func<int, double>(100, 20.989);
    func(10, 20);
    func('A', 20);
    
    //Class Template Examples
    Item<int> item1 {"Frank", 100};
    cout << item1.get_name() << ":" << item1.get_value() <<endl;
    
    Item<string> item2 {"Joe", "Biden"};
    cout << item2.get_name() << ":" << item2.get_value() <<endl;
    
    Item<Item<string>> item3 {"Joe", {"Frank", "Biden"}};
    cout << item3.get_name() << ":" << item3.get_value().get_name() << ":" << item3.get_value().get_value() <<endl;
    
    cout << "============================" << endl;
    My_Pair<string, int> pair1{"John", 4000};
    My_Pair<int, double> pair2{55, 40.0};
    cout << pair1.first << ":" << pair1.second << endl;
    cout << pair2.first << ":" << pair2.second << endl;

    return 0;
}