//set matrix zeroes - Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>& matrix, int n, int m, int i) {
    //set all non zero elements in row j to -1
    for(int j=0;j<m;j++){
        if(matrix[i][j] != 0)
            matrix[i][j] = -1;
    }
}

void markCol(vector<vector<int>>& matrix, int n, int m, int j){
    //set all non zero elements in col i to -1
    for(int i=0;i<m;i++){
        if(matrix[i][j] != 0)
            matrix[i][j] = -1;
    }
}

vector<vector<int>> setZeroes(vector<vector<int>>& matrix, int n, int m) {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    //finally mark all -1 as 0
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
    return matrix;
};

int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<vector<int>> ans = setZeroes(matrix, n, m);
    
    for(auto it : ans){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}