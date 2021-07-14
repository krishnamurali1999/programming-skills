#include <iostream>
using namespace std;
int main()
{
    int a, b, max;
    cin >> a >> b;
    if (a >= b)
        max = a;
    else
        max = b;
    int ans{1};
    for (int i = max; i <= a * b; i++)
    {
        if (i % a == 0 and i % b == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}