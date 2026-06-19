#include <bits/stdc++.h>
using namespace std;

pair<int, int> searchArray(int matrix[][5], int row, int col, int tar ){
    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            if(matrix[i][j]==tar){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}



int maxRowSum(int matrix[4][5],int row, int col){
    int maxSum = INT_MIN;
    int  maxRow = 0;    

    for (int i= 0; i < row; i++){
    int rowSum = 0;
        for (int j= 0; j<col; j++){
            rowSum += matrix[i][j];
        }
        if(rowSum > maxSum){
            maxSum =rowSum;
            maxRow = i;            
        }
    }
    return maxRow;
}


int main (){

    // int nameOfMatrix [row] [column];
    // int matrix[4][5];

    int matrix[4][5] = {{1,2,3,4,5}, {5,400,3,2,1}, {0,3,4,1,1}, {6,33,8,9,10}};

    // we track cell to acess the data
    // nameOfMatrix [row num] [col num]
    //row/col starts at 0, just like index

    // cout<< matrix[2][2]<<endl;

    // for(int i = 0;i<4;i++){
    //     for(int j= 0; j<5; j++){
    //         cout<< matrix[i] [j]<<" ";
    //     }
    //     cout<< endl;
    // }
    // auto result = searchArray(matrix, 4, 5, 33);
    // cout << "("<<result.first <<","<< result.second <<")" <<endl;;

    cout<< maxRowSum(matrix,4,5)<<endl;
    return 0;
}