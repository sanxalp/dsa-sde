//merge sorted arrays
//brute force

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  vector<int> ans(m + n);  

  int left = 0;
  int right = 0;
  int index = 0;

  while(left < m && right < n){
    if(nums1[left] <= nums2[right]) {
      ans[index++] = nums1[left++];
    } else {
      ans[index++] = nums2[right++];
    }
  }

  //if right pointer reaches end
  while(left < m) {
    ans[index++] = nums1[left++];
  }

  //if left pointer reaches end
  while(right < n){
    ans[index++] = nums2[right++];
  }

  //copy ans to nums1
  for(int i = 0; i < m+n; i++){
    nums1[i] = ans[i];
  }
}

int main(){
  vector<int> nums1 = {1,2,3,0,0,0};
  vector<int> nums2 = {2,5,6};
  int m = 3;
  int n = 3;
  merge(nums1, m, nums2, n);
  for(int i = 0; i < m+n; i++){
    cout << nums1[i] << " ";
  }
  return 0;
}