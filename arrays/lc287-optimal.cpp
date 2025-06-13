//find the duplicate number
//optimal approach - linked list cycle detection

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums){
  int slow = nums[0];
  int fast = nums[0];

  //phase 1 : find intersection point inside the cycle
  do{
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);

  //phase 2 : find entrance to the cycle (duplicate)
  slow = nums[0]; //reset slow to start
  while(slow != fast){
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow; //or fast
}

int main(){
  vector<int> nums = {3,1,3,4,2};
  cout<<findDuplicate(nums)<<endl;
  return 0;
}



// Analogy:
// Imagine a race track:

// If one person runs twice as fast, they will eventually lap the slower runner if there’s a loop.

// The first meeting point is somewhere inside the loop.

// After resetting, both runners will meet at the starting point of the loop — this is your duplicate.

// Why is the duplicate the start of the loop? Because:

// Every number leads to one specific next index.

// The first time a number is repeated, two entries lead to the same index — starting a cycle.

// The start of this cycle is the repeated number.

