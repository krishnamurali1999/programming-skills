/*
Inp: a[] = {3,1,2}
     b[] = {"G", "E", "K"}
Output: 
    b[] = {"E", "K", "G"}
*/
#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    int n=4;
    int arr1[] = {4,1,3,2};
    char arr2[] = {'X', 'Y', 'B', 'A'};
    pair<int, char> p1[n];
    for(int i=0;i<n;i++) {
        p1[i] = {arr1[i], arr2[i]};
    }
    sort(p1, p1+n);
    for(int i=0;i<n;i++) {
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
    return 0;
}