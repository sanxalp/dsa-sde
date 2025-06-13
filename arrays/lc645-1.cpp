//find the duplicate and missing number
//set + maths approach

#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums){
  vector<int> ans(2);
  int n = nums.size();
  unordered_set<int>set;

  long long expectedSum = (n*(n+1))/2;
  long long actualSum = 0;

  //find the duplicate
  for(int num : nums){
    if(set.count(num)){
      ans[0] = num;
    }
    set.insert(num); //wont insert the duplicate due to properties of hashset
    actualSum += num;
  }

  //find missing number
  ans[1] = expectedSum - (actualSum - ans[0]);

  return ans;
}

int main(){
  vector<int> nums = {1,2,2,4};
  vector<int> ans = findErrorNums(nums);
  cout << ans[0] << " " << ans[1] << endl;
}


//actual sum = expected sum - missing + duplicate