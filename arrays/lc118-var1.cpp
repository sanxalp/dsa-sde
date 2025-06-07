//Variation 1: Given Row and Column of Pascal Triangle, return the element at that place


#include <bits/stdc++.h>
using namespace std;


// Naive Approach: nCr
int getElement(int r, int c){
  int rowMul = 1;
  int colMul = 1;

  for(int i=1;i<=r-1;i++){
    rowMul *= i;
  }
  for(int i=1;i<=c-1;i++){
    colMul *= i;
  }

  int k = r-c;
  int kMul = 1;
  for(int i=1;i<=k;i++){
    kMul *= i;
  }

  int ans = (rowMul/(colMul*kMul));

  return ans;
} 

//Optimal approach
int getElementOptimal(int r, int c){
  long long res = 1;
  for(int i=0; i<c-1;i++){
    res = res*(r-1-i); 
    res = res/(i+1);
  }
  return res;
}


int main(){
  int r, c;

  cout << "Enter row and column: ";
  cin >> r >> c;

  int result = getElementOptimal(r, c);
  cout << result;

  return 0;
}