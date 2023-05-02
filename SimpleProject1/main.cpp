#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int globalVariableExample = 100; //global definition

int main() {
    cout << "Hello, World!!!" << endl;
    int room_number = 31;
    string str = "Sandeep";
    str += to_string(room_number);
    cout << (str += to_string(globalVariableExample)) <<endl;
    
    int test_scores[5] {10, 15, 20, 30, 50};
    
    if(test_scores[0] >= 10){
        cout << "true" <<endl;
    }else if(test_scores[0] >= 10){
        cout << "true" <<endl;
    }else{
        cout << "false" <<endl;
    }
    
     vector<int> v;

    // Insert elements into the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Print the elements of the vector
    for (std::size_t i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // Modify an element in the vector
    v[1] = 4;

    // Print the modified vector
    for (auto value: v) { //automatically identifies the datatype of the dynamic array
        cout << value << " ";
    }
    cout << endl;

    // Add an element to the vector
    v.push_back(5);

    // Print the updated vector
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // Remove the last element from the vector
    v.pop_back();

    // Print the updated vector
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    vector<int> nums {33,44,55,66,77};
    vector<int>::const_iterator it1 = nums.begin();
    //auto it1 = nums.cbegin();
    while(it1 !=nums.end()){
        cout << *it1 << endl;
        //*it1=88; compiler error when try to change the element
        it1++;
    }
    
    auto loc = find(begin(nums), end(nums), 1);
    if(loc != end(nums)){
        cout << "Found the number " << *loc << endl;
    }else{
        cout << "Couldn't find the number " << *loc << endl;
    }
    
    array<int, 5> arr{1,4,6,7,8};
    array<string, 5> arr1{"a","e","i","o","u"};
    
    //Lambda Expressions
    for_each(arr.begin(), arr.end(),
            [](int x) {cout<<x<<endl;});
    for_each(arr1.begin(), arr1.end(),
            [](string x) {cout<<x<<endl;});
            
    auto l = [](int x) { cout << "Hello Displaying the input element :" << x <<endl;};
    l(10);
    l(999);
    
    //Stateless lambda expression
    auto l1 = [](int x, int y){ return x + y; };
    cout << l1(2,3) << endl;
    
    //Stateful lambda expression
    int y{10};
    auto testl = [y] (int x) { return x + y; };
    cout << testl(2) << endl;
    
    //using mutable to modify variables captured by value within lambda
    int x {100};
    auto tester = [x] () mutable { x+=100; cout << x << endl;};
    tester();
    cout << x << endl;
    return 0;
}