#include <iostream>
#include <vector>
using namespace std;

// Pair Sum ---> Brute Force.
vector<int> pairSumB(vector<int>& nums, int target){
    vector<int> ans;
    int size = nums.size();
    for (int i=0; i<size;i++){
        for (int j=i+1; j<size;j++){
            if (nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {};
}



int main (){
    vector<int> vec ={2,7,15,18};
    vector <int> ans = pairSumB(vec, 20);
    for (int i = 0 ; i<ans.size();i++){
        cout << ans[i]<<" ";
    }






    return 0;
}