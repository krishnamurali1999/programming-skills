#include <iostream>
#include<string>
using namespace std;
int main()
{
    int decimal {0};
    cin>>decimal;

    string binary {""};

    while(decimal != 0) {
        int last_digit = decimal %2;
        binary = to_string(last_digit) + binary;
        decimal /= 2;
    }
    cout<<binary<<endl;
    return 0;
}