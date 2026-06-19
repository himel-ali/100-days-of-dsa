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

    for (int i= 0; i < col; i++){
    int rowSum = 0;
        for (int j= 0; j<row; j++){
            rowSum += matrix[j][i];
        }
        if(rowSum > maxSum){
            maxSum =rowSum;
            maxRow = i;            
        }
    }
    return maxRow;
}



int diaSum(int matrix[][6], int row, int col){
    int sum = 0;
    for (int i = 0; i<row;  i++){
        sum += matrix[i][i];
    }
    return sum;

}


int main (){

    // int nameOfMatrix [row] [column];
    // int matrix[4][5];

    int matrix[4][5] = {{1,2,3,4,5}, {5,400,3,2,1}, {0,3,4,1,1}, {6,33,8,9,10}};
    
    int diaMat[6][6] ={{3,4,5,6,7,8},{2,3,4,5,6,7},{1,2,3,4,5,6},{9,1,2,3,4,5},{8,9,1,2,3,4},{7,8,9,1,2,3}};

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

    cout<< maxRowSum(matrix,4,5) <<endl ;
    cout<< diaSum(diaMat,6,6) <<endl ;


    // 2d Vectors
    vector<vector<int>> mat = {{1,2,3,4,5,6},{3,2,1}};
    // We can make rows/cols of different sizes
    
    return 0;
}