#include<iostream>
using namespace std;
int main() {
    string s = "geeksforgeeksforgeeksgeeks";
    string pat = "geek";
    
    int i=0;
    int found = s.find(pat);
    while(found != string::npos) {
        cout<<found<<" ";
        found = s.find(pat, found+1);
    }
    return 0;
}