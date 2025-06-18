//search in a 2D matrix
//optimal approach

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n = matrix.size();
  int m = matrix[0].size();
  int low = 0, high = n * m - 1;

  while(low <= high){
    int mid = (low + high)/2;
    int row = mid / m;
    int col = mid % m;
    if(matrix[row][col] == target)  return true;
    else if(matrix[row][col] < target)  low = mid+1;
    else    high = mid+1;
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
  
  int target = 62;
  
  bool found = searchMatrix(matrix, target);
  
  if(found) {
    cout << "Target found in the matrix." << endl;
  } else {
    cout << "Target not found in the matrix." << endl;
  }
  
  return 0;
}