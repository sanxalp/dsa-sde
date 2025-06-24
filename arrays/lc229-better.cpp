//majority element 2
//better approach - hashmap

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums){
  int n=nums.size();
  unordered_map<int,int>mp;
  vector<int>res;

  for(auto num:nums){
    mp[num]++;
  }

  for(auto it:mp){
    if(it.second > (n/3))
      res.push_back(it.first);
  }
  return res;
}

int main(){
  vector<int> nums = {3, 2, 3, 2, 2};

  vector<int> result = majorityElement(nums);
  
  cout << "Majority elements are: ";
  for(int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}