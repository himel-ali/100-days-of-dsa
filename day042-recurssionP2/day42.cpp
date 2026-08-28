#include <bits/stdc++.h>
using namespace std;

// Fibonacci


int fib ( int n ){
    if ( n == 1 || n == 0){
        return n;
    }
    return fib(n-1) + fib(n-2);
}



// if array sorted

bool isSorted(vector<int> arr, int n){

    if ( n== 0 || n== 1) return true;

    return arr[n-1]>= arr[n-2] && isSorted(arr, n-1);
}


// recursive binary search

int recBS(vector<int> nums, int tar, int st, int end){
    if(st > end) return -1;
    int mid = st+(end -st)/2;

    if( nums[mid] == tar ){
        return mid;
    }else if(nums[mid]>tar){
       return recBS(nums, tar, st, mid-1);
    }else {
        return recBS(nums, tar, mid+1, end);
    }
}



// is array sorted 

bool issort(vector<int>& nums, int n){
    if ( n == 0 || n == 1) return true;

    return nums[n-1] >= nums[n-2] && issort(nums, n-1);
}

// sum of array eles

int sumArr(vector<int> &nums, int n){
    if ( n == 0 ) return 0;

    return nums[n-1] + sumArr(nums, n-1);
}

// linear search

int lineSer(vector<int>& nums, int n, int tar){
        if(n < 0) return -1;  
        if ( nums[n] == tar) return n;

        return lineSer(nums, n-1, tar);
}

// max ele in array

int maxxEle(vector<int>& nums, int n){
    if(n == 1) return nums[0];
    return max(nums[n-1], maxxEle(nums,n-1));
}

// index approach, forward

int maxEle(vector<int>& nums, int i){
    if( i == nums.size()-1) return nums[i];
    return  max(nums[i], maxEle(nums, i + 1));
}

// min ele in array

int minele(vector<int>& nums, int n){
    if(n == 1) return nums[0];
    return min(nums[n-1], minele(nums,n-1));
}

// first appearance
int firstape(vector<int>& nums, int i, int tar){
    if (i == nums.size()) return -1;
    if ( nums[i] == tar ) return i;
    return firstape(nums, i + 1, tar);
}

// last apperance 
int lastape(vector<int>& nums, int n, int tar){
    if ( n < 0) return -1;
    if ( nums[n-1] == tar ) return n-1;
    return lastape(nums, n - 1, tar);
}

// Binary search

int binaryS(vector<int> &nums, int target, int i, int n){
    int mid = i + ((n-1) - i) / 2;
    if(mid < 0 || mid>n) return -1;
    if(nums[mid] == target){
        return mid;
    }else if (nums[mid] > target){
        return binaryS(nums, target, i, mid);
    }else{
        return binaryS(nums, target, mid, n);
    }
}

int search(vector<int>& nums, int target){
    binaryS(nums, target, 0);

}




int main (){




    return 0;
}