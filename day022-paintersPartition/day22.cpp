#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> nums, int nPainters,int nBoards, int maxAllocation ){
    int painters = 1, bHeight = 0;
    int n = nums.size(); 

    for (int i = 0; i < n ; i++){
        if (nums[i] > maxAllocation) return false;

        if (bHeight + nums[i] <= maxAllocation){
            bHeight += nums[i];
        }else {
            painters++;
            bHeight = nums[i];
        }
    }
    if (painters <= nPainters){
        return true;
    }
        else {
            return false;
        }
}

int painter(vector<int> nums, int nPainters, int nBoards){
    int sum = 0, n = nums.size(); 
    for (int i = 0 ; i< n; i++){
        sum += nums[i];
    }

    int st = 0, end = sum;
    int ans = -1;
    for (; st <= end ; ){
        int mid = st + (end-st)/2;
        if ( isValid(nums,nPainters, nBoards, mid)){
            ans = mid;
            end = mid - 1;
        }else {
            st = mid + 1;
        }
    }
    return ans;
}

int main () {
vector <int> arr = {40,30,10,20};
cout<< painter(arr, 2, 4);

    return 0;
}