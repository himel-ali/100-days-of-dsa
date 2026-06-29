#include <bits/stdc++.h>
using namespace std;


int subarraySum(vector<int>& nums, int k){
    int cnt = 0;
    int n = nums.size();

    for (int i = 0; i<n; i++){
        int sum = 0;
        int j = i ;

        while(j<n){
            sum += nums[j];
            
            if (sum == k){
                cnt++;
             }
             j++;
        }
    }
    return cnt;
}




int main(){



    return 0;
}