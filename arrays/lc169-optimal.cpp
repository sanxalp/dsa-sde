//majority element
//optimal approach - moore's voting algorithm

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
  int cnt = 0;
  int elem;

  for(int i=0;i<nums.size();i++){
    if(cnt == 0){
      cnt = 1;
      elem = nums[i];
    }
    else if(nums[i] == elem){
      cnt++;
    }
    else{
      cnt--;
    }
  }

  // Verify the candidate
  int cnt1=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i] == elem){
      cnt1++;
    }
  }
  if(cnt1 > (nums.size()/2))
    return elem;
  return -1;
}

int main(){
  vector<int> nums = {2,2,1,1,1,2,2};

  int result = majorityElement(nums);
  
  cout << "Majority element is: " << result << endl;

  return 0;
}