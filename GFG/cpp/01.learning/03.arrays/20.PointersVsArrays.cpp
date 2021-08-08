#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30};
    int *ptr = arr;

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<arr[2]<<endl; // Recommended
    cout<<*(arr+2)<<endl;
    cout<<ptr[2]<<endl;
    cout<<*(ptr+2)<<endl; // recommended
    cout<<endl;

    int *p1 = arr;
    int (*p2)[3] = &arr;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<sizeof(p2)<<endl;
    return 0;
}