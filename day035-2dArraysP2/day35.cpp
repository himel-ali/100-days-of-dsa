#include <bits/stdc++.h>
using namespace std;



//search in a 2d Matrix

// bool searchMat(vector<vector<int>>& matrix,int target){
//         for (int row = 0; i<)
// }



int main (){


    /// linear search in 2d 
    int matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 16; 
    // for (int i = 0; i<3; i++){
    //     for (int j = 0 ; j<4; j++){
    //         if (matrix[i][j]== target){
    //             cout<< i<< ' '<< j<<endl;
    //         }
    //     }
    // }


    // I thought this will be a optimal approach however the time complexity of this code is same as linear search in 2d arrays
      int i = 0, j= 0;  
    while(i<3 && j<4){
        if (matrix[i][j]== target){
                cout<< i<< " "<< j<<endl;
                break;
            }
            j++;
            if(j==4){
                i++;
                j=0;
            }
    }



    return 0;
}