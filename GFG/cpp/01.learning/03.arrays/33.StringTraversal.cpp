#include<iostream>
using namespace std;
int main() {
    string str = "gfg";
    for(int i=0;i<str.length();i++) {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    
    for(char c: str) {
        cout<<c<<" ";
    }
    cout<<endl;

    for(auto i=str.begin(); i!=str.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}