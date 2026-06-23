#include <bits/stdc++.h>
using namespace std;


// Brute force approach --->

    // 1. find all the triplates
    // 2. find the unique by using sorting

vector<vector<int>> threeSumB(vector<int>& nums){
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i<n ; i++){
        for (int j=i+1; j<n ; j++){
            for (int k = j+1 ; k<n; k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    ans.insert({nums[i], nums[j], nums[k]});
                }
            }
        }
    }
}




int main (){


    return;
}