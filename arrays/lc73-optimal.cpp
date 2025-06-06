#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setZeroes(vector<vector<int>>& matrix){
  int n = matrix.size();
  int m = matrix[0].size();
  
  int col0 = 1;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j] == 0){
        //mark the ith row
        matrix[i][0] = 0;
        //mark the jth col
        if(j!=0)
          matrix[0][j] = 0;
        else
          col0 = 0;
      }
    }
  }
  // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
  for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
      if(matrix[i][j] != 0){
        //check for col and row
        if(matrix[i][0] == 0 || matrix[0][j] == 0){
          matrix[i][j] = 0;
        }
      }
    }
  }

  //Step 3: Mark first row and first col:
  if(matrix[0][0] == 0){
    for(int j=0;j<m;j++){
      matrix[0][j] = 0;
    }
  }
  if(col0 == 0){
    for(int i=0;i<n;i++){
      matrix[i][0] = 0;
    }
  }
  return matrix;
};

int main(){
  vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

  vector<vector<int>> ans = setZeroes(matrix);

  for(auto it: ans){
    for(auto ele : it){
      cout << ele << " " ;
    }
    cout << "\n";
  }
  return 0;
}