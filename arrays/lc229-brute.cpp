//majority element 2 
//brute force

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums){
  int n = nums.size();
  vector<int> res;

  for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
      if(nums[i] == nums[j])
        cnt++;
    }

    if(cnt >(n/3) && find(res.begin(), res.end(), nums[i]) == res.end()){
      res.push_back(nums[i]);
    }
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