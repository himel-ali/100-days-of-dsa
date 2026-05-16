#include <iostream>
#include <vector>
#include <algorithm>
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


// Pair Sum ---> Optimised Approach.
vector<int> pairSumOpti(vector<int>& nums, int target){
    vector<int> ans;
    int size = nums.size();
    int i = 0;
    int j = size-1;
   while (i<j){
    if (nums[i]+nums[j]== target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    } else if(nums[i]+nums[j]>target){
        j--;
    }else ( i++);
   return {};
    }
}




// Majority Element(Brute Force)
int majEleB(vector<int> &nums){
    int size = nums.size();
   
    for (int i = 0; i<size; i++){
        int k = 0;
        for (int j = 0;j<size;j++){
            if( nums[i]  == nums [j]){
                k++;
            } 
        } if (k> size/2){
                    return nums[i]; 
        }
    }
    return -1;
}

//vec ={1,1,2,2,3,3,3,3};
// Slightely Optimised
int majEleOpti(vector <int>& nums){
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int majEle = nums[0] ;
    int count = 1;
    for (int i = 1; i < size; i++ ){
        if(nums[i]== nums[i-1]){
            count++;
        }else {
            count = 1;
            majEle = nums[i]; 
        }
    } 
    if (count > size/2){
            return majEle;
        }
    return -1;

}





int main (){

    
    vector<int> vec ={1,1,2,2,3,3,3,3};
    // vector <int> ans = pairSumB(vec, 20);
    // for (int i = 0 ; i<ans.size();i++){
    //     cout << ans[i]<<" ";
    // }
    cout<< majEleOpti(vec);






    return 0;
}