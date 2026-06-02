#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


void mergeSorted(vector<int>& nums1,vector<int>& nums2, int m, int n){
    int swapper = m+n-1;
    int lastOfBig = m-1;;
    int lastOfSmall = n -1;
    
    for (; swapper >= 0;){
        if (nums1[lastOfBig]>nums2[lastOfSmall]){
            swap(nums1[lastOfBig],nums1[swapper]);
            lastOfBig--;
            swapper--;
        }else {
            swap(nums2[lastOfSmall], nums1[swapper]);
            lastOfSmall--;
            swapper--;
        }
        if (lastOfSmall < 0) break;
    }


}


int main (){
    vector <int> nums1 ={1,2,3,0,0,0};
     vector <int> nums2 ={2,5,6};

     mergeSorted(nums1,nums2,3,3);
     for (int i = 0 ; i<6;i++){
        cout<< nums1[i]<<" ";
     }



    return 0;
}