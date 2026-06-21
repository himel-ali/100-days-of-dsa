#include <bits/stdc++.h>
using namespace std;


// 2 sum
// Brute force ---> O(n^2)

// Optimised --- O(nlogn)
// can not use sorting, since it will destroy the  indices

// Optimized ---> Hash Map

 vector<int> twoSum(vector<int>& nums, int target){

    unordered_map<int, int> m;

    for (int i = 0; i<nums.size(); i++){
        int first = nums[i];
        int sec = target - first;

        if(m.find(sec) != m.end()){
            return {m[sec], i};
        }
        m[nums[i]] = i;
    }

    return {};
 }

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




int main (){



    return 0;
}