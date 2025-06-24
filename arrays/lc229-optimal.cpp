//majority element 2
//optimal approach - moore's voting algorithm extended

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums){
  int n = nums.size();
  int cnt1=0, cnt2=0;
  int el1 = INT_MIN;
  int el2 = INT_MIN;

  for(int i=0;i<n;i++){
    if(cnt1 == 0 && nums[i] != el2){
      cnt1=1;
      el1 = nums[i];
    }
    else if(cnt2==0 && nums[i] != el1){
      cnt2=1;
      el2=nums[i];
    }
    else if(nums[i] == el1) cnt1++;
    else if(nums[i] == el2) cnt2++;
    else{
      cnt1--, cnt2--;
    }
  }

  vector<int> res;
  //manual checking
  cnt1=0, cnt2=0;
  for(int i=0;i<n;i++){
    if(nums[i] == el1)  cnt1++;
    if(nums[i] == el2)  cnt2++;
  }
  if(cnt1 > (n/3))  res.push_back(el1);
  if(cnt2 > (n/3))  res.push_back(el2);
  sort(res.begin(), res.end()); //optional, to maintain order

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