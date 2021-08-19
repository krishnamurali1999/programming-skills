#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,10,10, 5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max = INT32_MIN;
    for(int i=1;i<n;i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    int second_max = INT32_MIN;
    for(int i=1;i<n;i++) {
        if(arr[i] != max) {
            if(second_max < arr[i] ) {
                second_max = arr[i];
            }
        }
    }
    cout<<second_max<<endl;
    return 0;
}