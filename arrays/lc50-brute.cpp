//pow(x,n)
//brute force

#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n){
  double ans = 1.0;

  for(int i=0;i<n;i++){
    ans *= x;
  }
  return ans;
}

int main(){
  double x = 2.0;
  int n = 10;

  double result = myPow(x, n);
  
  cout << "Result of " << x << "^" << n << " is: " << result << endl;

  return 0;
}