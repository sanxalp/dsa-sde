//majority element
//brute force

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
  int n = nums.size();
  for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
      if(nums[i]== nums[j])
        cnt++;
    }

    if(cnt > (n/2))
      return nums[i];
  }
  return -1;
}

int main(){
  vector<int> nums = {3, 2, 3};

  int result = majorityElement(nums);
  
  cout << "Majority element is: " << result << endl;

  return 0;
}