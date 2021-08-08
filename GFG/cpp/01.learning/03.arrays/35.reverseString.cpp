#include<iostream>
using namespace std;
int main() {
        string s = "geeks";
        for(auto i=s.end(); i >= s.begin();i--) {
            cout<<*i;
        }
    
    return 0;
}