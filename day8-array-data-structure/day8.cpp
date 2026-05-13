#include <iostream>
#include <vector>
#include <climits> 
using namespace std;
// ARRAYs ---> data structure
// Same type of data is stored in array
// contigous in memory + linear 
//one block in an array stores a selectedDataType of storage (4 bytes)


// Creation of Arrays 
        // dataType nameOfArray [size of array];
        // int marks [5];


// Position of Arrays 
 // stars at 0th index, o, 1, 2 , 3, 4;


// Pass by reference ----> 



// int smallestN () {
//     int smallest = INT_MAX;
    
//     for ( int i = 0; i < )
// }




// Linear search ---------->





//  int linearSearch(int arr[], int size, int target ){
//     int idx = 0;
//         for ( int i = 0; i <= size-1; i++){
//             if (arr[i]==target){
//                 return i;
                
//             } 
//         }
//         return -1;
//  }






void reverseA(int arr[], int size){
    for (int i = 0, j= size-1; i<j; i++, j--){
        swap(arr[i], arr[j]);
    }}


// WAF to calculatw the summ and product of all numbers in an array.

int sumArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i<= size-1; i++){
        sum += arr[i];
    }
    return sum;
}


int productArray(int arr[], int size){
    int product = 1;
    for (int i = 0; i<= size-1; i++){
        product *= arr[i];
    }
    return product;
}




// WAF find min number in an array

int minInArray(int arr[], int size){
    int smallest = INT_MAX;
    int idx=0;
    for (int i = 0; i<size;i++){
        if (arr[i]<smallest){
            smallest = arr[i];
             idx = i;
        }
    }
    return idx;
}



// WAF find max number in an array

int maxInArray(int arr[], int size){
    int largest = INT_MIN;
    int idx=0;
    for (int i = 0; i<size;i++){
        if (arr[i]>largest){
            largest = arr[i];
            idx = i;
        }
    }
    return idx;
}




// WAF to swap the max and min number of an array

void swapMaxMin(int arr[], int size) {
    int max_index = maxInArray(arr, size);
    int min_index = minInArray(arr, size);
    swap(arr[max_index],arr[min_index]);
}



// WAF to print all the unique values in an array


int unique(int arr[], int size){

}





//  WAF to print intersections of 2 arrays


int intersection(int arr1[], int size1, int arr2[], int size2){ 
    for ( int i = 0; i<size1; i++){
        for (int j = 0 ; j<size2 ; j++){
            if (arr1[i] == arr2[j]){
                return arr1[i];
            }
        }
    }
    return -1;
}




// WAF to print all unique values in an array












int main() {

    // int marks [5] = {100, 101, 102, 103, 104};
    // int markss [8] ;

    // // cout<< markss [3]<<endl;
    // // cout<< markss [1]<<endl;
    // int size = 8;

    // for (int i = 0; i<= (size-1) ; i++){
    //     cin  >> markss[i] ;
    //     cout<< markss[i]<<endl;
    // }






    // Find the smallest and largest number in an array

    // int array[6] = {5, 15, 22, 1, -15, 24};
    // int smallest = INT_MAX;
    // int size = 6;

    // for (int i = 0; i <= size -1 ; i++ ){
    //     if (smallest > array[i]){

    //         smallest = array[i];
    //     }
    // }
    // cout << smallest << endl;






    // // Find the smallest and largest number in an array
    // int largest = INT_MIN;
    // int idx = 0;

    // for (int i = 0 ; i<= size-1; i++){
    //     if (array[i]>largest){
    //         largest = array[i];
    //         idx = i;
    //     }

    // }
    // cout <<idx<< endl ;
    // cout << largest << endl;






    
    // cout<< linearSearch(array, 7, 8)<< endl;







    //Reverse an array
    int array [] = {1,2,3,4};

    reverseA(array, 4); 

    for (int i=0; i<=3;i++){
        cout << array[i]<<" ";
    }
    




 

    return 0;
}
