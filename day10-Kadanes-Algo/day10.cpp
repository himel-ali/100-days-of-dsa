#include <iostream>
#include <vector>
#include <climits> 
using namespace std;


// Subarrays --->

// total number of subarrays  {n*(n+1)}/2


/// Print the subarrays
int printSubArr(int arr[], int size){
    for (int st =0; st<size;st++){
        for (int end = st; end <size;end++){
            for (int i=0; i<=end;i++){
                cout << arr[i];
            }
            cout<< " ";
        }
        cout << endl;
    }

}


int subArrSum( int arr[], int size){
    int maxsum = INT_MIN;
     for (int st =0; st<size;st++){
            int cursum = 0; 
        for (int end = st; end <size;end++){
            cursum += arr[end];
            maxsum = max(maxsum , cursum);
        } 
    }
    return maxsum;
}




int main() {

 int arr[6]={2,3,4,5,6,7};
  printSubArr(arr, 6);

int arr2 [7] = {3, -4, 5,4,-1,7,-8};
cout << subArrSum(arr2,7);




    return 0;
}