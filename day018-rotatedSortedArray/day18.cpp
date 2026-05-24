#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Search in Rotated sorted array --->

int reverseSortedBS(vector<int> nums, int target){
    int st = 0, end = nums.size()-1;

    for  ( ; st <=  end; ){
        int mid = st +( end - st )/2;
        if ( nums[mid] == target){
            return mid;
        }else if(nums[mid] >= nums[st]){
            if (target >= nums[st] && target <= nums[mid] ){
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }else {
            if (target >= nums[mid] && target <= nums[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}


int main (){
    vector<int> vec = {3,4,5,6,7,0,1,2};
    cout<< "Go"<< endl;
    cout<< reverseSortedBS(vec, 0)<<endl;

    



    return 0;
}