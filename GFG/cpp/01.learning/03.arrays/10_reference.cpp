#include<iostream>
#include<vector>
using namespace std;

void swap(int &x, int &y) {
    int temp=x;
    x=y;
    y=temp;
}

void print(vector<int> &v) {
    for(auto x: v) {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main() {
    int x=10;
    int &y = x;
    cout<<y<<" ";
    x=x+5;
    cout<<y<<" ";
    y=y+5;
    cout<<x<<endl;
    
    int a=10, b=20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    
    vector<int> v;
    for(int i=0;i<1000;i++) {
        v.push_back(i);
    }
    print(v);


    vector<int> vect {10,20,30,40};
    for(auto &y: vect) 
        y=y+5;
    for(auto y: vect)
        cout<<y<<endl;

    vector <string> v2 {"murali", "krish", "kittu"};
    for(const auto &z: v2)
        cout<<z<<" ";
    cout<<endl;
    return 0;
}