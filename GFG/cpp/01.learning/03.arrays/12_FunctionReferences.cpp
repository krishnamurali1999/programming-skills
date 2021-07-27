#include<iostream>
using namespace std;

void func1(int &x) {
    x=x+5;
}

void func2(const string &s) {
    cout<<s<<endl;
} 


int main() {
    int x=10;
    func1(x);
    cout<<x<<endl;

    string s = "asdfghjklasdfghjkl asdfghjklasdfghjkl asdfghjklsdfghjk";
    func2(s);
    
    return 0;
}