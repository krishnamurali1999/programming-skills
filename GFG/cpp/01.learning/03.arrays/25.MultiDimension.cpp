#include<iostream>
#include<vector>

using namespace std;

int main() {
    int arr[3][2] = {{10,20},
                     {30,40},
                     {50,60}};
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr2[3][2] = {1,2,3,4,5,6};
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr3[][2] = {{1,2},{3,4}};
    int arr4[][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};

    // Variale size
    int m=3,n=2;
    int arr5[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            arr5[i][j] = i+j;
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr5[i][j]<<" ";
        }
        cout<<endl;
    }

    
    // Other ways to create array
    // 1.Double pointer

    int **arr6;
    arr6 = new int *[m];
    for(int i=0;i<m;i++) {
        arr6[i] = new int[n];
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            arr6[i][j] = 10;
            cout<<arr6[i][j]<<" ";
        }
    }
    cout<<endl<<endl;

    // 2. array of pointers
    int *arr7[m];
    for(int i=0;i<m;i++) {
        arr7[i] = new int[n];
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            arr7[i][j] = 10;
            cout<<arr7[i][j]<<" ";
        }
    }
    cout<<endl<<endl;

    // 3. array of vectors
    vector<int> arr8[m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            arr8[i].push_back(10);
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
           cout<<arr8[i][j]<<" ";
        }
    }
    cout<<endl<<endl;

    // 4. vector of vectors
    vector<vector<int>> arr9;
    for(int i=0;i<m;i++) {
        vector<int> v;
        for(int j=0;j<n;j++) {
            v.push_back(10*i);
        }
        arr9.push_back(v);
    }

    for(int i=0;i<arr9.size();i++) {
        for(int j=0;j<arr9[i].size();j++) {
            cout<<arr9[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
    return 0;
}