#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// 0 | 1 | 2 | 3 | 2 | 1


int peakOfMt(vector <int> nums){
    int st = 1, end = nums.size()-2;

    for ( ; st <= end ; ){
        int mid = st +  (end - st)/2;


        if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;            
        }else if (nums[mid]>nums[mid-1]  ){
            st = mid + 1;
        } else {
            end = mid -1;
        }
    }
    return -1;
} 



int main (){
    vector <int> vec = { 3,5,3,2,0};
cout<< "Go "<<peakOfMt(vec)<<endl;



    return 0;
}