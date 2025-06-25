//unique paths
//dp - memoization approach (better)

#include <bits/stdc++.h>
using namespace std;

int countPaths(int i, int j, int m, int n, vector<vector<int>>& dp){
  if(i==(m-1) && j==(n-1))  return 1; //base case, if we reach the bottom-right corner, return 1
  if(i>=m || j>=n)  return 0; //if we go out of bounds, return 0

  if(dp[i][j] != -1)  return dp[i][j]; //if already computed, return the stored value
  return dp[i][j] = countPaths(i+1, j,m,n,dp) + countPaths(i,j+1,m,n,dp);
}
int uniquePaths(int m, int n){
  vector<vector<int>> dp(m+1, vector<int>(n+1,-1)); //creates a dp table of size (m+1)x(n+1) initialized with -1
  return countPaths(0,0,m,n,dp);
}

int main(){
  int m = 5, n =6; //example dimensions of the grid

  int result = uniquePaths(m, n);
  
  cout << "Number of unique paths from top-left to bottom-right: " << result << endl;

  return 0;
}