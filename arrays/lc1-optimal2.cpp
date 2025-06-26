//two sum
//optimal - two pointer approach
//only optimal if we have to return YES or NO, otherwise hash map is optimal

#include <bits/stdc++.h>
using namespace std;

string twoSum(vector<int>& nums, int target){
  sort(nums.begin(), nums.end());
  int left =0, right=nums.size()-1;

  while(left < right){
    int sum = nums[left] + nums[right];
    if(sum == target){
      return "YES";
    }
    else if(sum < target){
      left++;
    }
    else{
      right--;
    }
  }
  return "NO";
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    cout << twoSum(nums, target);

    return 0;
}
