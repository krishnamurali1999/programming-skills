#include<iostream>
using namespace std;
int main() {
    int n {0}, fact {1};
    cin>>n;
    for(int i=1;i<=n;i++) {
        fact = fact*i;
    }
    cout<<fact<<endl;
    
    return 0;
}