#include <iostream>
#include <stdexcept>
using namespace std;
class Complex {
    double r,i;
    public:Complex(double a=0,double b=0):r(a),i(b) {
    }
    Complex operator+(Complex b)const {
        return {
            r+b.r,i+b.i
        }
        ;
    }
    Complex operator-(Complex b)const {
        return {
            r-b.r,i-b.i
        }
        ;
    }
    Complex operator*(Complex b)const {
        return {
            r*b.r-i*b.i,r*b.i+i*b.r
        }
        ;
    }
    Complex operator/(Complex b)const {
        double d=b.r*b.r+b.i*b.i;
        if(d==0)throw runtime_error("Divide by zero");
        return {
            (r*b.r+i*b.i)/d,(i*b.r-r*b.i)/d
        }
        ;
    }
    void show()const {
        cout<<r<<(i<0?" - ":" + ")<<(i<0?-i:i)<<"i\n";
    }
}
;
int main() {
    Complex a(4,2),b(1,1);
    (a+b).show();
    (a-b).show();
    (a*b).show();
    (a/b).show();
    return 0;
}
