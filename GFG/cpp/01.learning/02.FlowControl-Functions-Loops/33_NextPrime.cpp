#include<iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    while(true) {
        n++;
        for(i=2;i<n;i++) {
            if(n%i == 0) {
                break;
            }
        }
        if(i == n) {
            cout<<n<<endl;
            break;
        }
    }
}