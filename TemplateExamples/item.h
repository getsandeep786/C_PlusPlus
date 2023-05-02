#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

//Template classes are typically completely contained in header files
//So, we would have the template class in item.h and no item.cpp file would be used
template <typename T>
class Item
{
private:
    string name;
    T value;
public:
    Item(string name, T value) : name{name}, value{value}{};
    string get_name() const {
        return name;
    }
    T get_value() const {
        return value;
    }

};

#endif // ITEM_H
