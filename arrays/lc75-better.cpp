//sort colors
//brute approach - simply sort the array

//better approach - count the number of 0s, 1s and 2s and then place them in the array

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
  int n = nums.size();

  int cnt0=0, cnt1=0, cnt2=0;

  for(int i=0;i<n;i++){
    if(nums[i]==0) cnt0++;
    else if(nums[i]==1) cnt1++;
    else cnt2++;
  }

  for(int i=0;i<cnt0;i++) nums[i] = 0;
  for(int i=cnt0;i<cnt0+cnt1;i++) nums[i] = 1;
  for(int i=cnt0+cnt1;i<n;i++) nums[i]=2;
}

int main(){
  vector<int> nums = {2,0,2,1,1,0};
  sortColors(nums);
  cout << "The sorted array is: ";
  for(int i=0;i<nums.size();i++){
    cout << nums[i] << " ";
  }
  cout << "\n";
  return 0;
}