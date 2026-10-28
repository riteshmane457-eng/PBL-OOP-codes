#include <iostream>
using namespace std;
template<typename T>T larger(T a,T b) {
    return a>b?a:b;
}
template<typename T>class Box {
    T value;
    public:Box(T v):value(v) {
    }
    void show()const {
        cout<<value<<'\n';
    }
}
;
int main() {
    cout<<larger(4,9)<<'\n';
    cout<<larger(2.5,1.5)<<'\n';
    Box<int>b(42);
    b.show();
    return 0;
}
