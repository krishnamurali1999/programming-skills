#include<iostream>
using namespace std;
int main() {
    string s = "ababba";
    int start = 0;
    int end = s.length()-1;
    int i,j;
    for(i=start,j=end;i<=j;i++,j--) {
        if(s[i]!=s[j]){
            cout<<"Not a palindrome!!"<<endl;
            break;
        }
    } 
    if(i >= j) {
        cout<<"palindrome"<<endl;
    }
    return 0;
}