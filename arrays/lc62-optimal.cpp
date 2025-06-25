//unique paths
//combinatorial approach (optimal)

#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n){
  int N = n+m-2;
  int r = m-1;
  double res = 1;

  //like in pascal triangle - to calculate nCr
  for(int i=1;i<=r;i++){
    res *= (N-r+i)/i;
  }
  return (int)res;
}

int main(){
  int m = 3, n = 7; //example dimensions of the grid

  int result = uniquePaths(m, n);
  
  cout << "Number of unique paths from top-left to bottom-right: " << result << endl;

  return 0;
}