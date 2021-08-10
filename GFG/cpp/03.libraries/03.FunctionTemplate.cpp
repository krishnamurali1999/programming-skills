#include<iostream>
# define myMax2(x,y) (((x)>(y)) ? (x):(y)) //no type checking

using namespace std;

template<typename T>
T myMax(T x, T y) {
    return x>y?x:y;
}

template<typename T, int limit>
T arrMax(T arr[], int n) {
    T res = arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i] > res) {
            res = arr[i];
        }
    }
    return res;
}

int main() {
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<char>('c','g')<<endl;

    int arr1[] = {10, 40, 30};
    float arr2[] = {10.5, 10.6, 11.25, 9.22, 1.23};
    cout<<arrMax<int, 100>(arr1, 3)<<endl;
    cout<<arrMax<float, 50>(arr2, 5)<<endl;

    return 0;
}