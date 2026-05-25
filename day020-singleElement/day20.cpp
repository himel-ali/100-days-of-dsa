#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int singleElement(vector<int> nums){
    int st = 0, end = nums.size()-1;

    for(; st<= end; ){
        int mid = st +  (end - st)/2;
        
        if (mid == 0) return nums[mid];
        if (mid == nums.size()-1) return nums[mid];

        if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) {
            return nums[mid];
        } else if (mid % 2 == 0 && nums[mid] == nums[mid-1]) {
            end = mid - 1;
        } else if (mid % 2 == 0 && nums[mid] == nums[mid+1]) {
            st = mid + 1;
        } else if (mid % 2 != 0 && nums[mid] == nums[mid-1]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}


int main () {
    vector <int> vec = {3,3,7,7,10,11,11};
    cout<<"Go "<< singleElement(vec)<<endl;




    return 0; 
}