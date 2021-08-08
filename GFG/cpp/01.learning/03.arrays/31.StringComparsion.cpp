#include<iostream>
using namespace std;
int main() {
    string s = "geeksforgeeks";
    int res = s.find("eek");
    if(res == string::npos) {
        cout<<"Not present."<<endl;
    } else {
        cout<<"present: "<<res<<endl;
    }

    string s1 = "abc";
    string s2 = "bcd";
    if(s1 == s2) {
        cout<<"same"<<endl;
    } else if(s1 < s2) {
        cout<<"smaller"<<endl;
    } else {
        cout<<"greater"<<endl;
    }
    return 0;
}