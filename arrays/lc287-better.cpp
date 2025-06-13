//find the duplicate number
//hashmap approach

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums){
  int n = nums.size();

  unordered_set<int>mp;

  for(int num : nums){
    if(mp.count(num))
      return num;
    else
      mp.insert(num);
  }
  return -1;
}

int main(){
  vector<int> nums = {1,3,4,2,2};
  cout<<findDuplicate(nums)<<endl;
  return 0;
}

