#include <bits/stdc++.h>
using namespace std;



int main (){

    // int nameOfMatrix [row] [column];
    // int matrix[4][5];

    int matrix[4][5] = {{1,2,3,4,5}, {5,4,3,2,1}, {0,3,4,1,1}, {6,7,8,9,10}};

    // we track cell to acess the data
    // nameOfMatrix [row num] [col num]
    //row/col starts at 0, just like index

    cout<< matrix[2][2]<<endl;

    for(int i = 0;i<4;i++){
        for(int j= 0; j<5; j++){
            cout<< matrix[i] [j]<<" ";
        }
        cout<< endl;
    }



    return 0;
}