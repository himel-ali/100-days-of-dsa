// Binary 1 + 1 = 1
        //   0 + 0 = 0
        //   0 + 1 = 1
        //   1 + 0 = 1

// Two's Compliment ------->
// For storing negative numbers in memory 
// Prefix 0/1 added to the binary number
// 0 is positive
// 1 is negtive 

/// Steps in two's compliment (Dec to Bin)
// 1. Binary conversion
// 2. Prefix with a 0/1 (left most bit is MSB, most significant Bit), 0 is positive, 1 1 is negative
// 3. one's compliment -----> we reverse 0 to 1 and 1 to 0.
// 4. Add 1 to the resulatant binary number of step 3(2's compliment)
// Steps in two's compliment (Bin to dec)
// 1. one's compliment 
// 2. Add 1 to the resulatant binary number of step 3(2's compliment)



#include <iostream>
using namespace std;

int decToBin(int n){
    int bin = 0 ;
    int k = 1;
    for (; n>0; n/=2 ){
        int bit = n % 2;
        bin += bit * k;
        k *=10;
    }
    return bin;
}


int powerOfTwo( int n ){
    int res = 1;
    for (int i = 0 ; i<n;i++){
        res *= 2;
    }
    return res;
}

int binToDec(int n){
    int dec = 0;
    for (int i = 0; n > 0; n/=10, i++){
        int rem = n % 10;
        int dig = rem * powerOfTwo(i);
        dec += dig;
    }
    return dec;

}

int main(){

    cout << decToBin(6)<< endl;
    cout << decToBin(7)<< endl;
    cout << decToBin(8)<< endl;
    cout << decToBin(9)<< endl;
    cout << binToDec(110)<< endl;

}