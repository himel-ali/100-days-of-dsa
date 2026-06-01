#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector <int> nums, int c, int n, int maxAllo){
    int cows = 1, lastPosition = nums[0];

    for (int i = 0; i<n; i++){
        if (nums[i]-lastPosition >=  maxAllo){
            cows ++;
            lastPosition = nums[i];
        }
    }
    if (cows >= c){
        return true;
    } else {
        return false;
    }
}

int aggCow(vector <int> nums, int c, int n){
        sort(nums.begin(), nums.end());


    int st = 1, end = nums[n-1] - nums[0], ans = - 1,dist = 1;
    for (; st <= end; ){
        int mid = st+(end - st)/2;

        if (isValid(nums, c, n, mid)){
            ans = mid;
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }
    return ans;
}



int main () {

    vector<int> num = { 1,2,8,4,9};
    cout << aggCow(num, 3, 5);

    return 0;
}
