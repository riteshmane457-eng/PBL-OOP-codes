#include <iostream>
using namespace std;
int area(int side) {
    return side*side;
}
int area(int length,int width) {
    return length*width;
}
double area(double radius) {
    return 3.14159*radius*radius;
}
int main() {
    cout<<area(4)<<'\n'<<area(4,5)<<'\n'<<area(2.0)<<'\n';
    return 0;
}
