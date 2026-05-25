#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// 0 | 1 | 2 | 3 | 2 | 1


int peakOfMt(vector <int> nums){
    int st = 0, end = nums.size()-1;

    for ( ; st >= end ; ){
        int mid = st +  (end - st)/2;
        int peak = mid;

        if (nums[mid] >= nums[st]){

            
        }
    }
} 



int main (){



    return 0;
}