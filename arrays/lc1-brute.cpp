//two sum
//brute force - nested

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return the first pair found
            }
        }
    }
    return {}; // Return empty if no pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl; // Output the indices of the two numbers

    return 0;
}