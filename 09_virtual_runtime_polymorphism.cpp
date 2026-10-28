#include <iostream>
using namespace std;
class Shape {
    public:virtual void draw()const {
        cout<<"Shape\n";
    }
    virtual ~Shape()=default;
}
;
class Circle:public Shape {
    public:void draw()const override {
        cout<<"Circle\n";
    }
}
;
int main() {
    Circle c;
    Shape*ptr=&c;
    ptr->draw();
    return 0;
}
