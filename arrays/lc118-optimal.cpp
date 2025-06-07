//Variation 3: given n, generate whole pascal triangle
// LC 118

#include <bits/stdc++.h>
using namespace std;

//Naive

vector<int>generateRows(int row){
    long long res = 1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++){
        res = res * (row - col);
        res = res / (col);
        ansRow.push_back(res);
    }
    return ansRow;
}

vector<vector<int>> generate(int n){
    vector<vector<int>> ans;
    //store the entire pascal triangle
    
    for(int row=0;row<=n;row++){
        ans.push_back(generateRows(row));
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