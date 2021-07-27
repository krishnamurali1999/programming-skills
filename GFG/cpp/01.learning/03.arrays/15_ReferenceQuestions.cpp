#include<iostream>
using namespace std;

int &func() { 
    static int x=10;
    return x;
}

int main() {
    int x=10, y=20;
    int &z = x;
    z=y;
    z=z+5;
    cout<<x<<" "
        <<y<<" "
        <<z<<endl;
    // *********************

    int &p = func();
    y=20;
    cout<<func();
    // *********************

    string s1 ="gfg", s2="courses";
    string &&s3 = s1+s2;
    s3 = "welcome to " + s3;
    cout<<s3<<endl;
    return 0;
}