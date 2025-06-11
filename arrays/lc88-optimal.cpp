#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
  int left = m-1;
  int right = n-1;
  int k = m+n-1;  //end of merged array in nums1

  //merge from the back and in-place
  while(left >= 0 && right >= 0){
    if(nums1[left] > nums2[right]) {
      nums1[k--] = nums1[left--];
    } else {
      nums1[k--] = nums2[right--];
    }
  }
  
  //copy the remaining elements of nums2 to nums1
  while(right >= 0){
    nums1[k--] = nums2[right--];
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