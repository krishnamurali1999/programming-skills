#include<iostream>
#include<vector>

using namespace std;

int main() {
    int m=3;
    int arr[m][m] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


    int n;
    cin>>n;
    vector <vector<int>> vec(n, vector<int>(n,0));
    vector <vector<int>> ans(n, vector<int>(n,0));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int c;
            cin>>c;
            vec[i][j] = c;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            ans[i][j] = vec[j][i];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}