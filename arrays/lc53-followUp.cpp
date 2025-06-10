//maximum subarray sum - follow up question
//return the subarray that gives the maximum sum when there are multiple subarrays with the same maximum sum

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
  int n = nums.size();
  long long sum = 0, maxSum = INT_MIN;

  int start = 0;
  int ansStart = -1, ansEnd = -1;

  for(int i=0;i<n;i++){

    if(sum == 0)  start = i;  //starting index

    sum += nums[i];

    if(sum > maxSum) {
      maxSum = sum;

      ansStart = start;
      ansEnd = i;
    }

    //if sum is negative, then we need to start a new subarray
    if(sum <0){
      sum = 0;
    }
  }
  //printing the subarray
  cout << "The subarray is: ";
  for(int i = ansStart; i <= ansEnd; i++){
    cout << nums[i] << " ";
  }
  cout << "\n";
  
  return maxSum;
}

int main(){
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  cout << maxSubArray(nums) << endl;
  return 0;
}