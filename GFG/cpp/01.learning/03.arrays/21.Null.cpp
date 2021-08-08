#include<iostream>
using namespace std;
int main() {
    int *ptr = NULL;
    
    if(*ptr != NULL) {
        cout<<*ptr<<endl;
    }

    int *p = 0;
    cout<<*p<<endl;    
    return 0;
}