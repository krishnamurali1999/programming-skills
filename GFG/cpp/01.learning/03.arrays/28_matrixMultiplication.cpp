#include<iostream>
#include<vector>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    cout<<"enter rows and columns of matrix A: "<<endl;
    cin>>r1>>c1;
    cout<<"enter rows and columns of matrix B: "<<endl;
    cin>>r2>>c2;

    vector<vector<int>> matA(r1, vector<int>(c1));
    vector<vector<int>> matB(r2, vector<int>(c2));
    vector<vector<int>> ans(r1, vector<int>(c2));

    cout<<"MAT-A:"<<endl;
    for(int i=0; i<r1;i++) {
        for(int j=0;j<c1;j++) {
            int t;
            cin>>t;
            matA[i][j] = t;
        }
    }

    cout<<"MAT-B:"<<endl;
    for(int i=0; i<r2;i++) {
        for(int j=0;j<c2;j++) {
            int t;
            cin>>t;
            matB[i][j] = t;
        }
    }
    if(c1 == r2) {
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) {
                ans[i][j] = 0;
                for(int k=0;k<r2;k++) {
                    ans[i][j] = ans[i][j] + (matA[i][k]*matB[k][j]);
                }
            }
        }
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    } else {
        cout<<"NOT POSSIBLE"<<endl;
    }
    return 0;
}