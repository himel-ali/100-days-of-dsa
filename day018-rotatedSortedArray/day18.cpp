#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Search in Rotated sorted array --->

int reverseSortedBS(vector<int> nums, int target){
    int st = 0, end = nums.size();;
    int mid = st +( end - st )/2;

    for  ( ; st>  end; ){
        if ( mid == target){
            return mid;
        }else if(nums[mid] >= nums[st]){
            if (nums[st] <= target <= nums[mid]){
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }else {
            if (nums[st] <= target <= nums[mid]){
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }
    }


}


int main (){

    



    return 0;
}