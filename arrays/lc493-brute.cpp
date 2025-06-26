//reverse pair
//brute force

#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int>& nums){
  int n = nums.size();
  int cnt=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(nums[i] > 2*nums[j]){
        cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  vector<int> nums = {1,3,2,3,1};
  cout << "Number of reverse pairs: " << reversePairs(nums) << endl;
  return 0;
}