#include<iostream>
#include<string>
using namespace std;
int main() {
    int decimal = 10;
    string res="";
    while(decimal != 0) {
        int t = decimal % 2;
        cout<<res<<" ";
        decimal /= 2;
    } 
    cout<<res<<endl;
    return 0;
}