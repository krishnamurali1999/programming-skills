#include <iostream>
#include<vector>

using namespace std;
int main()
{
    // Fixed Sized arrays
    // 1. Allocated in function call stack
    int arr[100];
    int n{5};
    int arr2[n];
    int arr3[] = {10,
                 20,
                 30};
    // 2. Allocated on heap
    int *arr4 = new int[n];

    // Dynamic Sized arrays
    // Vectors in c++ STL
    return 0;
}