#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30};
    int *p = arr;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<endl;

    char arr1[] = {'g', 'f', 'm'};
    char *p1 = arr1;
    cout<<sizeof(arr1)<<endl;
    cout<<sizeof(p1)<<endl;
    cout<<endl;

    int *p2 = arr;
    ++*p2; // -> ++(*p2)
    cout<<arr[0]<<" "
        <<arr[1]<<" "
        <<*p2<<endl;
    cout<<endl;
    
    int *p3 = arr;
    *p3++; // *(p3++)
    cout<<arr[0]<<" "
        <<arr[1]<<" "
        <<*p3<<endl;
    cout<<endl;


    int *p4 = arr;
    *++p4; // *(++p4)
    cout<<arr[0]<<" "
        <<arr[1]<<" "
        <<*p4<<endl;
    cout<<endl;
    
    return 0;
}