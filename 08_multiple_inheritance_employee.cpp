#include <iostream>
#include <string>
using namespace std;
class BasicInfo {
    protected:string name;
    int id;
    public:void readBasic() {
        cout<<"ID and name: ";
        cin>>id>>name;
    }
}
;
class DepartmentInfo {
    protected:string department;
    public:void readDept() {
        cout<<"Department: ";
        cin>>department;
    }
}
;
class Employee:public BasicInfo,public DepartmentInfo {
    public:void read() {
        readBasic();
        readDept();
    }
    void display()const {
        cout<<id<<' '<<name<<' '<<department<<'\n';
    }
}
;
int main() {
    Employee e;
    e.read();
    e.display();
    return 0;
}
