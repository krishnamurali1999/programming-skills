#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        if (i % x == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
