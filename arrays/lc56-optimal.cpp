//merge intervals
//optimal approach

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
  int n = intervals.size();

  sort(intervals.begin(), intervals.end());

  vector<vector<int>> ans;

  for(int i=0;i<n;i++){
    int start = intervals[i][0];
    int end = intervals[i][1];

    //can be written better with less nesting - check leetcode submission
    if(!ans.empty()){
      if(start <= ans.back()[1]){
        ans.back()[1] = max(ans.back()[1], intervals[i][1]);
      } else {
        ans.push_back(intervals[i]); //same as pushing {start, end}
      }
    } else {
      ans.push_back({start, end});
    }
  }
  return ans;
}

int main() {
  vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
  vector<vector<int>> res = merge(intervals);

  for(auto it : res){
    cout << "[" << it[0] << "," << it[1] << "] ";
  }
  return 0;
}