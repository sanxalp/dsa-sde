//maximum subarray sum
//optimal approach

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
  int n = nums.size();
  long long sum = 0, maxSum = INT_MIN;

  for(int i=0;i<n;i++){
    sum += nums[i];

    if(sum > maxSum)
      maxSum = sum;

    if(sum <0)
      sum = 0;
  }
  return maxSum;
}

int main(){
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  cout << maxSubArray(nums) << endl;
  return 0;
}