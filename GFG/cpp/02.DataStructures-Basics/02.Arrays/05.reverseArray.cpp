#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = n-1;
    while(low < high) {
        int t = arr[low];
        arr[low] = arr[high];
        arr[high] = t;
        low++;
        high--;
    }
    for(auto x: arr) {
        cout<<x<<" ";
    }
    return 0;
}