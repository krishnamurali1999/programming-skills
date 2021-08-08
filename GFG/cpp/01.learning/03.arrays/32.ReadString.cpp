#include<iostream>
using namespace std;
int main() {
    cout<<"Your name: "<<endl;
    string name;
    // cin>>name; // krishna murali
    cout<<name<<endl;

    string name1;
    getline(cin, name1); // (cin, variable, stop_character)
    cout<<name1<<endl;

    return 0;
}