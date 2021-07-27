#include<iostream>
using namespace std;
int main() {
    int arr[] {10,20,30,40};
    for(auto &x: arr) {
        x=x+12;
    }
    for(auto x: arr) {
        cout<<x<<" ";
    }
    cout<<endl;

    string arr1[] = {"asdfghjkllkjhdfhsg", 
                    "wretrutiyoywttwreer",
                    "rewwrmfuhsopiewykgjtwuigewrquigpewruigewtrquigw"
                    };
    for(const auto &s: arr1) {
        cout<<s<<endl;
    }
    
    return 0;
}