#include <iostream>
using namespace std;

bool isSorted(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1]) 
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) 
        cin>>arr[i];

    bool res = isSorted(n, arr);
    cout<<res<<endl;
    
    return 0;
}