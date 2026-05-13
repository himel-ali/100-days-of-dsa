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
