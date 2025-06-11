//merge intervals
//brute approach

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
  int n = intervals.size();

  //step 1 : srot the intervals
  sort(intervals.begin(), intervals.end());

  vector<vector<int>> ans;

  //select 1st interval
  for(int i=0;i<n;i++){
    int start = intervals[i][0];
    int end = intervals[i][1];

    //skip all merged intervals
    if(!ans.empty() && end <= ans.back()[1]){  //end time of the last merged interval.
      continue;
    }

    //check the rest of intervals
    for(int j=i+1;j<n;j++){
      if(intervals[j][0] <= end){
        end = max(end, intervals[j][1]);
      } else {
        break;
      }
    }
    ans.push_back({start, end});
  }
  return ans;
}

int main(){
  vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
  vector<vector<int>> res = merge(intervals);

  for(auto it : res){
    cout << "[" << it[0] << "," << it[1] << "] ";
  }
  return 0;
}