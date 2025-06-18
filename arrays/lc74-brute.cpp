//search a 2d matrix
//bruteforce

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n = matrix.size();
  int m = matrix[0].size();

  for(int i=0;i<n;i++){
    if(target <= matrix[i][m-1]){
      for(int j=0;j<m;j++){
        if(matrix[i][j] == target){
          return true;
        }
      }
    }
  }
  return false;
}

int main(){
  vector<vector<int>> matrix = {
    {1, 3, 5, 7},
    {10, 11, 16, 20},
    {23, 30, 34, 50},
    {60, 61, 62, 63}
  };
  
  int target = 3;
  
  bool found = searchMatrix(matrix, target);
  
  if(found) {
    cout << "Target found in the matrix." << endl;
  } else {
    cout << "Target not found in the matrix." << endl;
  }
  
  return 0;
}