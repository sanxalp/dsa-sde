//best time to buy and sell stock
//brute force approach

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
  int n = prices.size();
  int maxProfit = 0;

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(prices[j]>prices[i]){
        int profit = prices[j] - prices[i];
        maxProfit = max(maxProfit, profit);
      } else {
        continue;
      }
    }
  }
  return maxProfit;
}

int main(){
  vector<int> prices = {7,1,5,3,6,4};
  cout<<maxProfit(prices)<<endl;
  return 0;
}