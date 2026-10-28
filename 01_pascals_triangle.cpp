#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Rows: ";
    cin>>n;
    for(int i=0;i<n;i++) {
        long long value=1;
        for(int s=0;s<n-i;s++)cout<<" ";
        for(int j=0;j<=i;j++) {
            cout<<value<<" ";
            value=value*(i-j)/(j+1);
        }
        cout<<'\n';
    }
    return 0;
}
