#include<iostream>
using namespace std;

int& func() {
    static int x=10;
    return x;
}


int main() {
    // QUESTION-1
    int x=10, z=30;
    int &p = x;
    p=z;
    p=p+5;
    cout<<x<<" "<<p<<" "<<z<<endl;
    
    int &res = func();
    cout<<func()<<endl;

    z=30;
    cout<<z<<endl;

    return 0;
}