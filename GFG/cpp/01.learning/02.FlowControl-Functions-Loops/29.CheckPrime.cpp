#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=2;i<n;i++) {
        if(n%i == 0) {
            cout<<"NOT A PRIME"<<endl;
            return 0;
        }
    }    
    cout<<"PRIME"<<endl;
    return 0;
}