#include<iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;

    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    
    cout<<endl;

    cout<<*p<<endl;
    x = x + 30;
    cout<<*p<<endl;
    *p = *p + 40;
    cout<<x<<endl;

    cout<<endl;

    int *p1;
    double *p2;
    string *p3;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;

    return 0;
}