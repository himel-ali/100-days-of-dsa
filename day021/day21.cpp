#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector <int> nums, int n, int m, int maxAllocation){
    int students = 1, pages = 0;

    for (int i = 0 ; i< n; i++){
        if (nums[i]> maxAllocation){
            return false;
        }
        else{
            students++;
        }
    }
    return students > m? false : true;
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
}

int main (){



    return 0;
}