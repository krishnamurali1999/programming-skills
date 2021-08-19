#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,5,2,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=1;i<n;i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}