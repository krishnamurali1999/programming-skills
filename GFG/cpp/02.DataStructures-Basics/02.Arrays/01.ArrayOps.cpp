#include<iostream>

using namespace std;

int main() {
    int capacity=10;
    int x {50};
    int arr[capacity] = {10,20,30,40,50};
    for(int i=0;i<capacity;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // SERARCH
    for(int i=0;i<capacity;i++) {
        if(arr[i] == x) {
            cout<<"element present"<<endl;
        }
    }

    // INSERT
    /*capacity:10*/
    int n=5, pos=2, element = 999;
    for(int i=n-1;i>=pos-1;i--) {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = element;
    n=n+1;
    for(int i=0;i<capacity;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // delete
    for(int i=pos-1;i<n;i++) {
        arr[i] = arr[i+1];
    }
    for(int i=0;i<capacity;i++) {
        cout<<arr[i]<<" ";
    }
    n=n-1;

    cout<<endl;

    return 0;
}