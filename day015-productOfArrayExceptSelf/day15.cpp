#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> productExSelf(vector<int>& nums){
    
    vector<int> ans;
    for (int i = 0; i<nums.size();i++){
         for (int j = 0; j<nums.size();j++){
            if (i!=j){
                nums[i] *= nums[j];
            }
        }
    }  
    return ans;
}



// Optimised version
vector<int> productExSelf(vector<int>& nums){
}




int main (){
    vector <int> nums = {1,2,3,4};
    vector<int> ans = productExSelf(nums);

    for (int i = 0; i<ans.size();i++){
        cout<< ans[i]<<endl;
    }

    return 0;
}