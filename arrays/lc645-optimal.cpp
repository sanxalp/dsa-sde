//find the duplicate and missing number
//optimal approach - maths formula

#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums){
  long long n = nums.size();

  long long SN = n*(n+1)/2;
  long long S2N = n*(n+1)*(2*n+1)/6;
  long long S = 0, S2 = 0;

  for(int i=0;i<n;i++){
    S += nums[i];
    S2 += (long long)nums[i] * (long long)nums[i];
  }

  long long val1 = S - SN;   //x-y
  long long val2 = S2 - S2N; //x+y

  val2 = val2/val1;  //x2 - y2 = (x+y)(x-y) => x+y = val2/val1

  long long x = (val1 + val2)/2;  //solve x-y and x+y
  long long y = x - val1;

  return {(int)x, (int)y};
}

int main(){
  vector<int> nums = {1,2,3,6,7,5,7};
  vector<int> ans = findErrorNums(nums);
  cout << ans[0] << " " << ans[1] << endl;
}