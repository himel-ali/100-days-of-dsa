#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

//  SORTING ---> Process of arrenging the data in an order

// Ascending sorting --> ascending order
// Decsending sorting ---> descending order

//  BUBBLE SORT --->  O(n^2)

void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    bool  isSwap =  false;
    
    for (int i = 0; i < n-1; i++) {      
        for (int j = 0; j < n-i-1; j++) {    
            if (nums[j] < nums[j-1]) {
                swap(nums[j], nums[j-1]);
                isSwap = true;
            }
        }
        if (isSwap=false){
            return;
        }
    }
}

void bubblleSort(vector<int>& nums){
    int n = nums.size();
    bool  isSwap =  false;

    for (int i = 0; i<n-1; i++){
        for (int j = 1; j < n-i; j++){
                if (nums[j]<nums[j-1]){
                swap(nums[j], nums[j-1]);
                isSwap = true;
                }
        }
        if (isSwap=false){
            return;
        }
    }
}

// SELECTION SORT --->

void selctionSort(vector<int>& nums){
    int n = nums.size();
    int minM = INT_MAX;

    for (int i = 0; i< n-1; i++){
         int minIdx = i;
        for (int j = i+1; j<n; j++){
          if (nums[j] < nums[minIdx]) {
                minIdx = j;
            }
        } 
    swap(nums[i], nums[minIdx]);   
    }
}


// INSERTION SORT

void insertionSort(vector<int> nums){
    int n = nums.size();
    for (int i =1; i<n; i++){
            int curr = nums[i];
            int prev = i-1;
        for (;prev>=0 && nums[prev] < curr;){
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = curr;
    }
}




int main () {
    vector<int> arr =  {4,1,5,2,3};
    selctionSort(arr);
    for (int i = 0; i<arr.size(); i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}