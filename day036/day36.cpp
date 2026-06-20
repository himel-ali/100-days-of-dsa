#include <bits/stdc++.h>
using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix){

    int rows = matrix.size(), cols =matrix[0].size();
    int srow = 0, erow = rows-1;
    int scol = 0, ecol = cols -1;

    vector<int> ans;

    while(srow <= erow && scol <= ecol){
    // top
        for (int i = scol; i<=ecol; i++){
            ans.push_back(matrix[srow][i]);
        }
    // right 
        for (int j = srow+1; j<= erow; j++){
            ans.push_back(matrix[j][ecol]);
        }
    //bottom
    if (srow != erow){
        for(int i = ecol-1; i>=scol; i--){
             ans.push_back(matrix[erow][i]);
        }
    }
    //left 
    if (scol != ecol){
        for (int j = erow-1; j>=srow+1; j--){
            ans.push_back(matrix[j][scol]);
        }
    }
        srow++; erow--; scol++; ecol--;
    }
    return ans;
}




int main (){




    return 0;
}