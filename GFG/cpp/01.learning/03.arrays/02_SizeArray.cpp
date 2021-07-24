#include<iostream>
using namespace std;
int main() {
    int arr[] {10,20,30,40,50};
    cout<<sizeof(arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n;
    
    int arr1[6] = {10, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << n1;
    
    return 0;
}
