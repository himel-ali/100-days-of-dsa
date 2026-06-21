#include <bits/stdc++.h>
using namespace std;


// 2 sum
// Brute force ---> O(n^2)

// Optimised --- O(nlogn)
// can not use sorting, since it will destroy the  indices

// Optimized ---> Hash Map 

 vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> m;

    for (int i =0 ; i<nums.size();i++){
        int first = nums[i] ;
        int sec = target - first;

        if(m.find(sec) != m.end()){
            return {m[sec], i};
        }
        m[nums[i]] = i;
    }
    return {};
 }

 vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){

    unordered_set<int> s;
    int n =grid.size();
    int repeat, miss;
    vector<int> ans;
    int expSum = 0, actSum = 0;

    for (int i = 0; i < n ; i++){ 
        for( int j = 0; j< n ; j++){
            actSum += grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                repeat = grid[i][j];
                ans.push_back(repeat);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = (n*n) * (n*n + 1 ) / 2;
    miss = expSum - actSum + repeat ;
    ans.push_back(miss);

    return ans;
 }


 int findDuplicate(vector<int>& nums){
    unordered_set<int> s;

    for(int i = 0; i<nums.size(); i++){
        if (s.find(nums[i]) != s.end()){
            return nums[i];
        }
        s.insert(nums[i]); 
    }
    return -1;
 }






int main (){



    return 0;
}