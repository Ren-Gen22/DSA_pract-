#include<bits/stdc++.h>
using namespace std;
void boolMat(vector<vector<int>> mat){
    int m=mat.size(),n=mat[0].size();
    vector<bool> row(m, false);
    vector<bool> col(n, false);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] || col[j]) {
                mat[i][j] = 1;
            }
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> mat = {{1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}};
    boolMat(mat);
    return 0;
}
