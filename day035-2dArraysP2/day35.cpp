#include <bits/stdc++.h>
using namespace std;



//search in a 2d Matrix

// number of rows ---> matrix.size();      
// number of cols ---> matrix[0].size();

bool searchMat(vector<vector<int>>& matrix,int target){
        // part 1 of the probem to search for the row
        int rows = matrix.size() - 1;
        int cols = matrix[0].size() - 1;

        int st = 0;
        int end = rows;
        int tarRow;        
        

    while(st <= end){
        int midRow = st+(end-st)/2;

        if (matrix[midRow][0]<= target && target <= matrix[midRow][cols]){
            tarRow = midRow;
            break;
        }else if (matrix[midRow][0]> target){
            end = midRow -1;
        }else if (target> matrix[midRow][cols]){
            st = midRow + 1;
        }
    }
    int rSt = 0;
    int rEnd = cols;

    while ( rSt <= rEnd){
        int mid = rSt+(rEnd-rSt)/2;

        if (matrix[tarRow][mid] == target){
            return true;
        }else if (matrix[tarRow][mid]>target){
            rEnd = mid - 1;
        }else {
            rSt = mid + 1;
        }

    }
    return false;
}



int main (){


    /// linear search in 2d 
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 16; 
    // for (int i = 0; i<3; i++){
    //     for (int j = 0 ; j<4; j++){
    //         if (matrix[i][j]== target){
    //             cout<< i<< ' '<< j<<endl;
    //         }
    //     }
    // }


    // I thought this will be a optimal approach however the time complexity of this code is same as linear search in 2d arrays
    //   int i = 0, j= 0;  
    // while(i<3 && j<4){
    //     if (matrix[i][j]== target){
    //             cout<< i<< " "<< j<<endl;
    //             break;
    //         }
    //         j++;
    //         if(j==4){
    //             i++;
    //             j=0;
    //         }
    // }


   cout<<  searchMat(matrix, 34)<<endl;



    return 0;
}