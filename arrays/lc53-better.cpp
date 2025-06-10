//maximum subarray sum
//better approach

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
  int n = nums.size();
  int maxSum = INT_MIN;

  for(int i=0;i<n-1;i++){
      int sum = 0;
    for(int j=i;j<n-1;j++){
      sum += nums[j];
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}

int main(){
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  cout << maxSubArray(nums) << endl;
  return 0;
}