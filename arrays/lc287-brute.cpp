//find the duplicate number
//brute force - sorting approach

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums){
  sort(nums.begin(), nums.end());

  for(int i=0;i<nums.size();i++){
    if(nums[i] == nums[i+1])
      return nums[i];
  }
  return -1;
}

int main(){
  vector<int> nums = {1,3,4,2,2};
  cout<<findDuplicate(nums)<<endl;
  return 0;
}