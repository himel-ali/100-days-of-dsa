#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){
    sort(nums.begin(),nums.end()); 
    vector<vector<int>> ans;
    int n = nums.size();

    for (int i = 0; i<n ; i++){
        if(i > 0 && nums[i]==nums[i-1]) continue;
        if((long)nums[i]+ nums[i+1] + nums[i+2] + nums[i+3]>target) break;
        if((long)nums[i] + nums[n-1] + nums[n-2] + nums[n-3] < target) continue;


        for (int j = i+ 1; j<n ; j++){
            int k = j+1, l=n-1;
            if(j != i+1 && nums[j] == nums[j-1]) continue;
            if((long)nums[i] + nums[j] + nums[j+1] + nums[j+2] > target) break;
if((long)nums[i] + nums[j] + nums[n-1] + nums[n-2] < target) continue;

            while(k<l){
                long sum = (long)nums[i] + nums [j] + nums [k] + nums[l];
                if (sum<target){
                    k++;
                }else if ( sum > target) {
                    l--;
                }else {
                    ans.push_back({nums[i], nums [j], nums [k], nums[l]});

                    while(k<l && nums[k]==nums[k+1])k++;
                    while(k<l && nums[l]==nums[l-1])l--;

                    k++, l--;
                }
            }
        }
    }
    return ans;
}


int main (){


    return 0;
}