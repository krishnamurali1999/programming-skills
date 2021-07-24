#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;


    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * 2;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    for (int &x : arr)
        x = x * 2;
    for (int x:arr) 
        cout<<x<<" ";
    cout<<endl;

    return 0;
}