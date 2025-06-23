//majority element
//better approach - hashing

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
  unordered_map<int, int>mp;

  for(auto num:nums){
    mp[num]++;
  }

  for(auto it:mp){
    if(it.second > (nums.size()/2))
      return it.first;
  }
  return -1;
}

int main(){
  vector<int> nums = {2,2,1,1,1,2,2};

  int result = majorityElement(nums);
  
  cout << "Majority element is: " << result << endl;

  return 0;
}