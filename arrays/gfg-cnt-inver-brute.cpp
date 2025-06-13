//https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

//brute force approach

#include <bits/stdc++.h>
using namespace std;

int countInversions(vector<int>& arr){
  int n = arr.size();
  int count = 0;

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i] > arr[j]){
        count++;
      }
    }
  }
  return count;
}

int main(){
  vector<int> arr = {5,4,3,2,1};
  cout << countInversions(arr) << endl;
  return 0;
}