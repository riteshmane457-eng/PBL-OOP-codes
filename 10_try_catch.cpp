#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    double a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try {
        if(b==0)throw runtime_error("Cannot divide by zero");
        cout<<a/b<<'\n';
    }
    catch(const exception&e) {
        cout<<e.what()<<'\n';
    }
    return 0;
}
