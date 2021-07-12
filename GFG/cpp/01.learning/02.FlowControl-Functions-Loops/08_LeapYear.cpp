#include<iostream>
using namespace std;
int main() {
    int year;
    cin>>year;
    if(year%4 != 0) {
        cout<<"No"<<endl;
    } else if(year%100 != 0) {
        cout<<"Yes"<<endl;
    } else if(year%400 != 0) {
        cout<<"No"<<endl;
    } else {
        cout<<"Yes"<<endl;
    }   

}