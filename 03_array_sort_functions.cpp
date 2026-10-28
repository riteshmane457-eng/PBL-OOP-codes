#include <iostream>
using namespace std;
void read(int a[],int n) {
    for(int i=0;i<n;i++)cin>>a[i];
}
void display(const int a[],int n) {
    for(int i=0;i<n;i++)cout<<a[i]<<' ';
    cout<<'\n';
}
void swapValues(int &a,int &b) {
    int t=a;
    a=b;
    b=t;
}
void sortArray(int a[],int n) {
    for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1])swapValues(a[j],a[j+1]);
}
int main() {
    int a[5];
    cout<<"Enter 5 numbers: ";
    read(a,5);
    sortArray(a,5);
    display(a,5);
    return 0;
}
