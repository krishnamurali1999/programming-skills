#include <iostream>
using namespace std;
int main()
{
    int a, b, min{-1};
    cin >> a >> b;

    if (a >= b)
        min = b;
    else
        min = a;

    int ans{1};
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}