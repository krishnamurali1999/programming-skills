/*
++, --, ptr+int, ptr-int, ptr1-ptr2
*/

#include<iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40};
    
    int *p = arr;
    cout<<*p<<" "<<p<<endl;
    
    p++;
    cout<<*p<<" "<<p<<endl;
    
    p--;
    cout<<*p<<" "<<p<<endl;
    
    p = p+3;
    cout<<*p<<" "<<p<<endl;
    
    p = p-3;
    cout<<*p<<" "<<p<<endl;
    
    cout<<endl;

    int *ptr1 = arr;
    cout<<*ptr1<<" "<<ptr1<<endl;

    int *ptr2 = ptr1+3;
    cout<<*ptr2<<" "<<ptr2<<endl;
    
    cout<<(ptr2-ptr1)<<endl;

    
    return 0;
}