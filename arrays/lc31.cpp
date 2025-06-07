//next permutation - optimal approach
//brute only high level view

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>& nums){
    int n = nums.size();
    
    //step 1 : find the break point
    int index = -1;
    for(int i=n-2;i>0;i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }
    
    //if break point does not exist i.e. last permutation
    if(index == -1){
        //reverse whole array
        reverse(nums.begin(), nums.end());
        return nums;
    }
    
    //step 2 : find the next greater element and swap it with nums[index]
    for(int i=n-1;i>index;i--){
        if(nums[i] > nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    
    //step 3 : reverse the right half
    reverse(nums.begin() + index + 1, nums.end());
    return nums;
}

int main(){
    vector<int>nums = {2, 1, 5, 4, 3, 0, 0};
    vector<int>ans = nextPermutation(nums);
    
    for(auto it:ans){
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}