#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;


// Binary search --->  Like finding words in a dictnory
// condition already applied ---> when the array is sorted(monotonic/follows monotounos function)


// example --->
// arr[] = {-1, 0,3,4,5,9,12}, sorted in ascending order.
// target = 12
// we find the mid first
// mid = (st + end)/2

int binarySearch(vector <int>& nums, int target){
    
    int st = 0;
    int end = nums.size()-1; 
   
    while( st <= end ){
        int mid = (st + end )/2;
        
        if ( nums[mid] == target){
            return mid;
        } else if (nums[mid]>target){
            end = mid-1;            
        } else  if (nums[mid]<target){
            st = mid+1;
        }    
    }
    return -1;
}




int main (){

    vector <int> arr = {-1, 0,3,4,5,9,12};
    cout<< binarySearch(arr, 12)<<endl;



    return 0;
}