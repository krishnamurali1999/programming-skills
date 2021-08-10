// container:
//     1. Simple 
//     2. Container Adapters
//     3. Associative
// Algorithms

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[] = {10,15,8,20};
    sort(arr, arr+4);
    for(auto x:arr) {
        cout<<x<<" ";
    }
    cout<<endl;

    if(binary_search(arr, arr+4, 8))
        cout<<"present"<<endl;
    else
        cout<<"not present"<<endl;

}