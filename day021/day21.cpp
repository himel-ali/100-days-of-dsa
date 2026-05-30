#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector<int> nums, int n, int m, int maxAllocation) {
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > maxAllocation) {
            return false;
        }
        if (pages + nums[i] > maxAllocation) {
            students++;        
            pages = nums[i];   
        } else {
            pages += nums[i];   
        }
    }
    return students > m ? false : true;
}

int bookAllo(vector <int> nums, int n, int m){
    if (m > n){
        return -1;
    }
    
    int sum = 0;
    for ( int i = 0; i<n ; i++){
        sum += nums[i]; 
    }

    int ans = -1;
    int st = 0, end = sum;

    for (; st<=end ; ){
        int mid = st + (end-st)/2;

        if (isValid(nums, n , m, mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main (){
    int arr[] = {2,1,3,4};
    vector <int> pages = {2,1,3,4};

    cout<< bookAllo(pages, 4,  2);



    return 0;
}