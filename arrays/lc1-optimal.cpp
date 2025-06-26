//two sum
// optimal - hash map - optimal if we have to return indices of the two numbers
// if we have return just YES or NO, then two pointer approach is optimal

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  unordered_map<int,int>mp;

  for(int i=0;i<nums.size();i++){
    int complement = target - nums[i];
    if(mp.find(complement) != mp.end()){
      return {mp[complement], i};
    }
    else{
      mp[nums[i]] = i; // store the index of the current number
    }
  }
  return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl; // Output the indices of the two numbers

    return 0;
}