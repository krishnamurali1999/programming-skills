#include <iostream>
using namespace std;
int main()
{
    int binary;
    cin >> binary;

    int val = 0;
    int base = 1;
    while (binary > 0)
    {
        int last_digit = binary % 10;
        val = val + (last_digit * base);
        binary /= 10;
        base = base * 2;
    }
    cout << val << endl;
    return 0;
}