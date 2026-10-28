#include <iostream>
#include <string>
using namespace std;
class MyString {
    string value;
    public:MyString():value("") {
    }
    ~MyString() {
    }
    void accept() {
        cout<<"Enter text: ";
        getline(cin,value);
    }
    void display()const {
        cout<<value<<'\n';
    }
}
;
int main() {
    MyString s;
    s.accept();
    s.display();
    return 0;
}
