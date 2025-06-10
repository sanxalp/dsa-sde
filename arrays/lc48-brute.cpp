//rotate matrix by 90 degrees
//brute force approach

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& matrix){
  int n = matrix.size();
  vector<vector<int>> ans(n, vector<int>(n,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      ans[j][n-i-1] = matrix[i][j];
    }
  }
  return ans;
}

int main(){
  vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  vector<vector<int>> ans = rotate(matrix);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}