#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    for(int i=0;i<v.size();i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    for(auto &i: v) {
        cout<<i<<" ";
    }
    cout<<endl;

    int n=3, x=10;
    vector<int> v2(n,x);
    for(auto i=v2.begin();i!=v2.end();i++) {
        cout<<(*i)<<" ";
    }
    cout<<endl;

    int arr[] = {10,20,30,40,50};
    n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v3(arr, arr+n);
    for(auto i = v3.rbegin();i!=v3.rend();i++) {
        cout<<(*i)<<" ";
    }   
    return 0;
}