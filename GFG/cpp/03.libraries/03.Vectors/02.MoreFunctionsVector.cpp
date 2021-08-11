#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v {10,5,20,15};
    v.pop_back();
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    cout<<v.front()<<endl;
    
    v.back() = 999;
    for(int x:v)
        cout<<x<<" ";
    cout<<endl<<endl;

    vector<int> v2 {10,5,20,15};
    auto it = v2.insert(v2.begin(), 100);
    for(int x:v2)
        cout<<x<<" ";
    cout<<endl;

    v2.insert(v2.begin()+2, 300);
    for(int x:v2)
        cout<<x<<" ";
    cout<<endl;

    v2.insert(v2.begin(),2,400);
    for(int x:v2)
        cout<<x<<" ";
    cout<<endl;

    vector<int>v3;
    v3.insert(v3.begin(), v2.begin(), v2.begin()+3);
    for(int x:v3)
        cout<<x<<" ";
    cout<<endl<<endl;

    v = {10,5,20,15};
    v.erase(v.begin());
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    v.erase(v.begin(), v.end()-1);
    for(int x:v)
        cout<<x<<" ";
    cout<<endl<<endl;

    v.clear();
    cout<<v.size()<<endl;
    if(v.empty() == true) {
        cout<<"vector is empty"<<endl;
    } else {
        cout<<"vector is not empty"<<endl<<endl;
    }

    v = {10,5,20,15};
    
    v.resize(3);
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    
    v.resize(5);
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    v.resize(8, 100);
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    



    return 0;
}