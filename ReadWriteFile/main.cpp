#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Hello, Read/Write File !!!" << endl;
    ifstream in_file;
    in_file.open("./test.txt");
    if(!in_file){
        cerr << "Problem Opening File " << endl;
        return 1;
    }
    cout << "Good to go" << endl;
    string line{};
    while(getline(in_file, line)){
        cout << line << endl;
    }
    
    ofstream out_file{"./output.txt"};
    if(!out_file){
        cerr << "Error creating file..." << endl;
        return 1;
    }
    string output_txt{};
    cout << "Enter something to write to the file: ";
    getline(cin, line);
    out_file << line << endl;
    out_file.close();
    
    return 0;
}