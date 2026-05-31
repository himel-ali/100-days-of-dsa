#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector <int> nums, int c, int n, int maxAllo){

}

int aggCow(vector <int> nums, int c, int n){

    int sum = 0;
    for ( int i = 0; i< n;i++){
        sum += nums[i];
    }

    int st = 0, end = sum, ans = -1;
    for (; st <= end; ){
        int mid = st+(end - st)/2;

        if (isValid(nums, c, n, mid)){
            ans = mid;
            end = mid - 1;
        }else {
            st = mid + 1;
        }
    }
    return ans;
}



int main () {



    return 0;
}
