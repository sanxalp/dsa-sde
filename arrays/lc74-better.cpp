//search a 2D matrix for a target value
//better approach using binary search

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& nums, int target){
  int n = nums.size();
  int low = 0, high = n-1;

  while(low <= high){
    int mid = (low + high) / 2;

    if(nums[mid] == target) return true;
    else if(nums[mid] < target) {
      low = mid + 1;
    }
    else {
      high = mid -1;
    }
  }
  return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n = matrix.size();
  if(n == 0) return false;
  int m = matrix[0].size();

  for(int i = 0; i < n; i++){
    if(target <= matrix[i][m-1]){
      return binarySearch(matrix[i], target);
    }
  }
  return false;
}

int main() {
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