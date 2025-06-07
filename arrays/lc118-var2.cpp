//Variant 2: Print any nth row of the pascal triangle
//LC 119

#include <bits/stdc++.h>
using namespace std;

// Naive Approach: nCr
int getNthRow(int n, int r){
  long long res = 1;
  for(int i=0;i<r;i++){
    res = res * (n-i);
    res = res / (i+1); 
  }
  return res;
}

void pascalTriangle(int n){
  //printing the entire row
  for(int c=1;c<=n;c++){
    cout << getNthRow(n-1, c-1) << " ";
  }
  cout << "\n";
}


void optimalPascalTriangle(int n){
  long long ans = 1;
  cout << ans << " "; // First element is always 1

  for(int i=1; i<n;i++){
    ans = ans * (n-i);
    ans = ans/i;
    cout << ans << " "; 
  }
  cout << endl; 
}


int main(){
  int n;
  cout << "Enter the row number: ";
  cin >> n;
  optimalPascalTriangle(n);
  return 0;
}