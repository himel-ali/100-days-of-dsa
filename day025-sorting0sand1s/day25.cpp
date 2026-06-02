#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


// SORT COLOR

void sortColor(vector<int>& nums){
    int n = nums.size();
    int zero = 0, one = 0, two = 0;

    for (int i = 0 ; i< n; i++){
        if (nums[i] == 0){
            zero++;
        }else if (nums[i]==1){
            one++;
        }else {
            two++;
        }
    }

    for (int j=0; j<zero;j++){
        nums[j]= 0;
    }
    for (int k=zero; k<one+zero;k++){
        nums[k]= 1;
    }
    for (int l=one+zero; l<two+one+zero;l++){
        nums[l]= 2;
    }
}


// Dutch National Flag Algorithm

vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();
    for (int i=0,j=n-1;i<j;){
        if (nums[i]+nums[j]==target){
             return {i, j};
        }else if(nums[i]+nums[j]>target){

            j--;
        }else{
            i++;
        }
    }
}



int main () {




    return 0;
}