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



int main (){




    return 0;
}