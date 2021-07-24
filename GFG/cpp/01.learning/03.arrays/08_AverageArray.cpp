#include <iostream>
using namespace std;

int averageArray(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s / double(n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double res = averageArray(arr, n);
    cout << res << endl;
}