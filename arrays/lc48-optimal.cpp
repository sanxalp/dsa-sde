//rotate matrix by 90 degrees
//optimal approach

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix, int n){

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  //reverse each row
  for(int i=0;i<n;i++){
    reverse(matrix[i].begin(), matrix[i].end());
  }
}

int main(){
  vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  int n = matrix.size();
  rotate(matrix, n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}