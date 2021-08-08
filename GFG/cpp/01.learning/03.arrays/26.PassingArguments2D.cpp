#include<iostream>
#include<vector>

using namespace std;

const int R=3;
const int C=2;

// void print(int mat[3][2]) {
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<2;j++) {
//             cout<<mat[i][j]<<" ";
//         }
//     }
//     cout<<endl<<endl;
// }

void print(int mat[][2], int m) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<2;j++) {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
}

void print(int mat[R][C]) {
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
}

void doublePointerPrint(int **arr, int m, int n) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
}

void arrayOfPointersPrint(int *arr[], int m, int n) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
}

void arrayOfVectorsPrint(vector<int> arr[], int m) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<arr[i].size();j++) {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
}

void vectorOfVectorsPrint(vector<vector<int>> &arr) {
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            cout<<arr[i][j]<<" ";
        }
    }
}


int main() {
    int mat[3][2] = {{10,20},{30,40},{50,60}};
    // print(mat);
    print(mat, 3);
    


    // Using double pointer
    int **arr;
    int row=3, col=2;
    arr = new int *[row];
    for(int i=0;i<row;i++) {
        arr[i] = new int[col];
        for(int j=0;j<col;j++) {
            arr[i][j] = i;
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<endl;
    doublePointerPrint(arr,row, col);

    // using array of pointers
    int *arr2[row];
    for(int i=0;i<row;i++) {
        arr[i] = new int[col];
        for(int j=0;j<col;j++) {
            arr[i][j] = i;
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<endl;

    // using array of vectors
    vector<int> arr3[row];
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            arr3[i].push_back(i);
        }
    }
    cout<<endl<<endl;
    arrayOfVectorsPrint(arr3, row);

    // Using vector of vectors
    vector<vector<int>> arr5;
    for(int i=0;i<row;i++) {
        vector<int> V;
        for(int j=0;j<col;j++) {
            V.push_back(i);
        }
        arr5.push_back(V);
    }
    cout<<endl;
    vectorOfVectorsPrint(arr5);

    return 0;
}