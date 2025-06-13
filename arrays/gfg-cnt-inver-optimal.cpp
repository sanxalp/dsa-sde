//https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

//optimal approach - merge sort

#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr, int low, int mid, int high){
  vector<int> temp; //temporary array
  // [low...mid]
  //[mid+1...high]
  int left = low;
  int right = mid+1;

  //modification 1 : count variable to count the pairs:
  int count = 0;

  //storing elements in the temporary array in a sorted manner//
  while(left <= mid && right <= high){
    if(arr[left] <= arr[right]){
      temp.push_back(arr[left]);
      left++; 
    }
    else {
      temp.push_back(arr[right]);
      count += (mid - left + 1); //modification 2 : count the pairs
      right++;
    }
  }

  // if elements on the left half are still left //
  while(left <= mid){
    temp.push_back(arr[left]);
    left++;
  }
  //  if elements on the right half are still left //
  while(right <= high){
    temp.push_back(arr[right]);
    right++;
  }

  // transfering all elements from temporary to arr //
  for(int i=low;i<=high;i++){
    arr[i] = temp[i-low];
  }

  return count; //modification 3 : return the count
}

int mergeSort(vector<int>& arr, int low, int high){
    int count = 0;
    if (low >= high) return count;
    int mid = (low + high) / 2 ;
    count += mergeSort(arr, low, mid);  // left half
    count += mergeSort(arr, mid + 1, high); // right half
    count += merge(arr, low, mid, high);  // merging sorted halves
    return count;
}

int numberOfInversions(vector<int>& arr){
  int n = arr.size();
  return mergeSort(arr, 0, n-1);
}

int main(){
  vector<int> arr = {5,4,3,2,1};
  cout << numberOfInversions(arr) << endl;
  return 0; 
}