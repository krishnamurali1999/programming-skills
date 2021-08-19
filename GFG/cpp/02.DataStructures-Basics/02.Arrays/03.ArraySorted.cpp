#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,4,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isSorted = true;
    for(int i=1;i<n;i++) {
        if(arr[i-1] > arr[i]) {
            isSorted = false;
            break;
        }
    }
    if(isSorted) {
        cout<<"SORTED"<<endl;
    } else {
        cout<<"NOT SORTED"<<endl;
    }
    return 0;
}