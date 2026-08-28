#include <bits/stdc++.h>
using namespace std;

// void pS(vector<int>& arr,vector<int>& ans, int i, vector<vector<int>>& res){
//     if(i == arr.size()) {
//         res.push_back(ans);
//         return ;
//     }

//     ans.push_back(arr[i]);
//     pS(arr, ans, i + 1, res);

//     ans.pop_back();
//     pS(arr, ans, i + 1, res);
// }

//  vector<vector<int>> subsets(vector<int>& nums){
//     vector<int> ans; 
//     vector<vector<int>> res;
//     pS(nums, ans, 0, res);
//     return res;
//  }


 void pS(vector<int>& arr,vector<int>& ans, int i, vector<vector<int>>& res){
    if(i == arr.size()) {
        res.push_back(ans);
        return ;
    }

    ans.push_back(arr[i]);
    pS(arr, ans, i + 1, res);

    ans.pop_back();

    while (i + 1 < arr.size() && arr[i] == arr[i+1]) { i++; }
    pS(arr, ans, i + 1, res);
}

 vector<vector<int>> subsets(vector<int>& nums){
    vector<int> ans; 
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    pS(nums, ans, 0, res);
    return res;
 }



int main () {



    return 0;
}