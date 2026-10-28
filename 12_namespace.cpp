#include <iostream>
using namespace std;
namespace First {
    int value=10;
}
namespace Second {
    int value=20;
}
int main() {
    cout<<First::value<<' '<<Second::value<<'\n';
    return 0;
}
