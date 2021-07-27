#include<iostream>
using namespace std;

void func(string &&s) {
    s ="hi " + s;
    cout<<s<<endl;
}

int main() {
    func("user");
    
    // int &x=3;       // INVALID
    // const int &x=3; // VALID
    // int &&x=3;      // VALID

    // string &s = "gfg";       // INVALID
    // const string &s = "gfg"; // VALID
    // string &&s = "gfg";      // VALID
    



    return 0;
}