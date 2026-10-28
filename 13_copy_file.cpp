#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream source("input.txt",ios::binary);
    if(!source) {
        cerr<<"Create input.txt first\n";
        return 1;
    }
    ofstream dest("output.txt",ios::binary);
    if(!dest) {
        cerr<<"Cannot open output.txt\n";
        return 1;
    }
    dest<<source.rdbuf();
    if(!dest) {
        cerr<<"Copy failed\n";
        return 1;
    }
    cout<<"Copied input.txt to output.txt\n";
    return 0;
}
