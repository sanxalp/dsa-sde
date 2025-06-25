//unique paths
//recursive approach - brute

#include <bits/stdc++.h>
using namespace std;

int countPaths(int i, int j, int m, int n){
  if(i==(m-1) && j==(n-1))  return 1; //base case, if we reach the bottom-right corner, return 1
  if(i>=m || j>=n)  return 0; //if we go out of bounds, return 0
  return countPaths(i+1,j,m,n)+countPaths(i,j+1,m,n);
}

int uniquePaths(int m, int n){
  return countPaths(0,0,m,n);  
}

int main(){
  int m = 3, n = 7; //example dimensions of the grid

  int result = uniquePaths(m, n);
  
  cout << "Number of unique paths from top-left to bottom-right: " << result << endl;

  return 0;
}