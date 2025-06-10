//maximum subarray sum
//brute force approach

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
  int n = nums.size();
  int maxSum = INT_MIN;

  for(int i=0;i<n-1;i++){
    for(int j=i;j<n-1;j++){
      int sum = 0;
      for(int k=i;k<=j;k++){
        sum += nums[k];
      }
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