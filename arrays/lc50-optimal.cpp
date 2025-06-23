//pow(x,n)
//optimal approach

#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n){
  long long y = abs((long long)n);

  double ans = 1.0;

  while(y>=1){
    if(y%2 == 1){
      ans *= x;
    }
    x *= x;
    y /= 2;
  }
  return n < 0 ? 1.0/ans : ans;
}

int main(){
  double x = 2.0;
  int n = -10;

  double result = myPow(x, n);
  
  cout << "Result of " << x << "^" << n << " is: " << result << endl;

  return 0;
}