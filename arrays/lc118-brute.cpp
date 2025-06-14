//Variation 3: given n, generate whole pascal triangle
// LC 118

#include <bits/stdc++.h>
using namespace std;

//Naive

int  nCr(int n, int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return (int)res;
}

vector<vector<int>> generate(int n){
    vector<vector<int>> ans;
    
    //store the entire pascal triangle
    for(int row = 1;row<=n;row++){
        vector<int>tempList;
        for(int col = 1;col<=row;col++){
            tempList.push_back(nCr(row-1, col-1));
        }
        ans.push_back(tempList);
    }
    return ans;
}

int main(){
    int n = 5;
    
    vector<vector<int>> result = generate(n);
    
    for(auto it : result){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}