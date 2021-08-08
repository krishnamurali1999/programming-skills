#include<iostream>
using namespace std;
void fun(int *p) {
    *p=*p+5;
}

void fun2(string *s) {
    cout<<*s<<endl;
}

int main() {
    int x=10;
    fun(&x);
    cout<<x<<endl;
    
    string s = "geeksforgeeks";
    fun2(&s);
    
    return 0;


}