#include<iostream>
using namespace std;
void func() {
    cout<<"In func"<<endl;
}

int getMax(int x, int y) {
    if(x>y) return x;
    else return y;
}

int main() {
    cout<<"Before calling func()"<<endl;
    func();
    func();
    cout<<"After calling func()"<<endl;
    
    int a=10,b=20;
    cout<<getMax(a,b)<<endl;
    
    return 0;
}