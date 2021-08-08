#include<iostream>
#include <cmath>
using namespace std;
int main() {
    string binary = "100";
    int start = binary.length()-1;
    int end = 0;
    int power = 0;
    int res {0};
    for(int i=start;i>=end;i--) {
        int num = (int)(binary[i]-'0');
        res = res+(num*pow(2,power));
        power++;
    }
    cout<<res<<endl;
}